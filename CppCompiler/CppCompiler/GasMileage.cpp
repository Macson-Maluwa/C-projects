#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  double totalMiles=0;
  double totalGallons=0;
  double miles;
  
 cout<<"Enter miles driven per trip(-1 to quit): ";
 cin>>miles;
 
 while(miles != -1)
{
  
  totalMiles+=miles;
  cout<<"Enter gallons per trip: ";
  double gallons;
  cin>>gallons;
  totalGallons+=gallons;
  
  double mpg=miles/gallons;
  double totalMpg=totalMiles/totalGallons;
  
  cout<<"MPG: "<<setprecision(6)<<fixed<<mpg<<endl;
  cout<<"Total MPG: "<<setprecision(6)<<fixed<<totalMpg<<endl;
 
  cout<<"Enter miles driven per trip(-1 to quit): ";
  cin>>miles;
}
return 0;
}