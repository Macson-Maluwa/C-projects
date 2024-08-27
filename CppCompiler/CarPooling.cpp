#include<iostream>
#include<string>
using namespace std;

class CarPooling
{
 public:
CarPooling(int,int,int,int,int);
void setTotalMiles(int);
void setCostPerGallon(int);
void setAveragePerMiles(int);
void setParkingFees(int);
void setTollsPerDay(int);
int getTotalMiles();
int getCostPerGallon();
int getAveragePerMiles();
int getParkingFees();
int getTollsPerDay();
void calculateCost();
 private:
int totalMiles;
int costPerGallon;
int averageMilesPerGallon;
int parkingFees;
int tollsPerDay;
};
CarPooling::CarPooling(int t,int c,int a, int p, int to)
{
 totalMiles=t;
 costPerGallon=c;
 averageMilesPerGallon=a;
 parkingFees=p;
 tollsPerDay=to;
}
void CarPooling::setTotalMiles(int m)
{
 totalMiles=m;
}
void CarPooling::setCostPerGallon(int cost)
{
costPerGallon=cost;
}
void CarPooling::setAveragePerMiles(int ave)
{
averageMilesPerGallon=ave;
}
void CarPooling::setParkingFees(int fees)
{
 parkingFees= fees;
}
void CarPooling::setTollsPerDay(int tolls)
{
 tollsPerDay=tolls;
}
int CarPooling::getTotalMiles()
{
 return totalMiles;
}
int CarPooling::getCostPerGallon()
{
 return costPerGallon;
}
int CarPooling::getAveragePerMiles()
{
 return averageMilesPerGallon;
}
int CarPooling::getParkingFees()
{
 return parkingFees;
}
int CarPooling::getTollsPerDay()
{
 return tollsPerDay;
}
void CarPooling::calculateCost()
{
 int total;
 total=costPerGallon+tollsPerDay+
parkingFees;
cout<<"The total cost is:"<<total<<endl;
}

int main()
{
CarPooling myCar(0,0,0,0,0);
int total;
int cost;
int average;
int fees;
int toll;
cout<<"Enter the total miles driven per day"
<<endl;
cin>>total;
myCar.setTotalMiles(total);

cout<<"Enter cost per gallon\n";
cin>>cost;
myCar.setCostPerGallon(cost);

cout<<"Enter the average miles per gallon"
<<endl;
cin>>average;
myCar.setAveragePerMiles(average);

cout<<"Enter parking fee per day"
<<endl;
cin>>fees;
myCar.setParkingFees(fees);

cout<<"Enter tolls per day"<<endl;
cin>>toll;
myCar.setTollsPerDay(toll);

cout<<"Average miles per day:"<<myCar.getAveragePerMiles()<<"\n"
<<"Cost per gallon:"<<
myCar.getCostPerGallon()<<"\n"
<<"Average gallon per mile:"<<
myCar.getAveragePerMiles()<<"\n"
<<"Parking fees per day:"<<
myCar.getParkingFees()<<"\n"<<
"Tolls per day:"<<myCar.getTollsPerDay()
<<endl;
myCar.calculateCost();
return 0;
}