#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 double grossSales;
 double salary;
 int percent=9;
 double rate;
 rate=(double)percent/100;
 
 cout<<"Enter  sales in Kwachas(-1 to quit): "<<endl;
 cin>>grossSales;

while(grossSales!=-1)
{
  salary=rate*grossSales+200;
  cout<<"Salary is : K"<<setprecision(2)<<fixed<<salary<<endl;

 cout<<"Enter gross sales of last week(-1 to quit): "<<endl;
 cin>>grossSales;
}
 return 0;
}




