#include<iostream>
#include<iomanip>
using namespace std;

class Sales
{
  public:

   Sales();
   void readSales();
   void outPutSales();
   void getPersonalSales();
   int getProductTotal(int[],const int);
   void getTotalAmount();
   
   private:

    static const int product=6;
    static const int salesPerson=5;
    static const int numberOfSellers=2;
    static const int monthDays=1;
    int sales[product][salesPerson];
    int total;
    int productTotal;  
    
};

 Sales::Sales()
{
   total=0,
   productTotal=0;
  
  for(int row = 0;row<product;++row)
   for(int column = 0;column<salesPerson;++column)
    sales[row][column]=0;
 }

void Sales::readSales()
{
  int product;
  int person;
  int totalV;
  
  for(int index=1;index<=monthDays;++index)  
 {
   std::cout<<"Enter sales for day:"<<index<<std::endl;
   for(int column=0;column<numberOfSellers;++column){
    
     std::cout<<"Enter Salesperson number:"<<std::endl;
     std::cin>>person;
     std::cout<<"Enter product number:\n ";
     std::cin>>product;
     std::cout<<"Enter total value of that product sold that day\n";
     std::cin>>totalV;
     sales[product][person]=sales[product][person]+totalV;}    
   }
} 

void Sales::outPutSales()
{
  std::cout<<"SALES SUMMARY FOR A PARTICULAR MONTH\n";
  std::cout<<"       ";
for(int index=1;index<salesPerson;++index)
 std::cout<<"S:"<<index<<" ";
 std::cout<<"Sold"<<std::endl;
  
  for(int row=1;row<product;++row){
    std::cout<<"Prod:"<<row;
   for(int column=1;column<salesPerson;++column){
    std::cout<<setw(4)<<sales[row][column];}
    productTotal=getProductTotal(sales[row],salesPerson);
    std::cout<<setw(5)<<productTotal<<std::endl;}
 // std::cout<<"Total";
 // total=getPersonalSales();
 // std::cout<<setw(4)<<total;
    
}

int Sales::getProductTotal(int salesArray[],int personN)
{
  int pTotal=0;

  for(int index=1;index<salesPerson;++index)
   pTotal=pTotal+salesArray[index];
   return pTotal;
}
void Sales::getPersonalSales()
{
  std::cout<<"Total:";
  for(int column=1;column<salesPerson;++column){
   for(int row=1;row<product;++row)
    total=total+sales[row][column];
    std::cout<<setw(4)<<total;
    total=0;}
    
}
void Sales::getTotalAmount()
{
  int totalSold=0;
  for(int row=1;row<product;++row)
   for(int column=1;column<salesPerson;++column)
    totalSold=totalSold+sales[row][column];
  std::cout<<setw(5)<<totalSold;
}


int main()
{
   Sales sales;
   sales.readSales();
   sales.outPutSales();
   sales.getPersonalSales();
   sales.getTotalAmount();
   //  cout << "Hello,World!\n";
    return 0;
}