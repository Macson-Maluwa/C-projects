#include<iostream>
#include<iomanip>
using namespace std;

class ParkingCharges
{
   public:
   ParkingCharges();
   void getCharges();
   void calculateCharges();
   void displayCharges();
   
   private:
   static const int Size = 3;
   float totalHour;
   double totalCharges;
   int car[Size];
   double threeHrCharge;
   double aboveThreeHrCharge;
   double charges[Size];
   float hours[Size];
};

ParkingCharges::ParkingCharges()
{
  totalHour = 0.0;
  car[Size]  = {};
  totalCharges = 0.00;
  threeHrCharge = 2.00;
  aboveThreeHrCharge = 0.50;
  charges[Size] = {};
  hours[Size] = {};
}
 
void ParkingCharges::getCharges()
{ 
  
  for(int count = 0; count < Size; ++count){
    std::cout << "Enter car number:";
    std::cin  >> car[count];
    std::cout << "Enter Hours:";
    std::cin  >> hours[count];
    calculateCharges();}
}

void ParkingCharges::calculateCharges()
{   
    static int count = 0;
    float extraHr;
    if(hours[count]<= 3)
      charges[count] = threeHrCharge;
    else if(hours[count] == 24)
      charges[count] = 10.00;
    else{
      extraHr = hours[count] - 3;
      charges[count] = threeHrCharge + (aboveThreeHrCharge * extraHr);}
    
    totalHour += hours[count];
    totalCharges += charges[count];
    ++count;
 }
    
void ParkingCharges::displayCharges()
{
  getCharges();
  std::cout << std::endl;
  std::cout << "Car" << "   " << "Hours" << "   " << "Charges\n";
  for(int count = 0; count < Size; ++count)
    std::cout << car[count] << setw(10) <<  hours[count] << setw(4) <<'$' << setw(6) << charges[count]
              << std::endl;
  std::cout << "TOTAL" << ' ' << setw(5) << totalHour << setw(4) << '$' << setw(6) << totalCharges;
    
}

int main()
{
    ParkingCharges carParking;
    carParking.displayCharges();
    return 0;
}