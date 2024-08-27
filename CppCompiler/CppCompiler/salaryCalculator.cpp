#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double normalHours=40;
    double hoursWorked;
    double hourlyRate;
    
    cout<<"Enter hours worked(-1 to quit): ";
    cin>>hoursWorked;
    
    while(hoursWorked!=-1)
    {
      cout<<"Enter hourly rate in Kwachas: ";
      cin>>hourlyRate;
      
      double salary;
      if(hoursWorked<=normalHours)
      {
        salary=hoursWorked*hourlyRate;
        cout<<"Salary: K"<<setprecision(2)<<fixed<<salary<<endl; 
      }
      else
      {
        salary=hoursWorked*hourlyRate+hourlyRate/2;
        cout<<"Salary: K"<<setprecision(2)<<fixed<<salary<<endl;  
      }
    
      cout<<"Enter hours worked(-1 to quit): ";
      cin>>hoursWorked;
    
  }
 return 0;
}
