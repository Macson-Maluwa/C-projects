#include<iostream>
using namespace std;

int main()
{
   int payCode=0;
   int salary;
   int normalHours=40;
   int wage;
   int sales;
   int totalSalary;
   int items;
   int cSalary;
   int grossWage;
   
   
   std::cout<<"Enter the employee's paycode(press 5 to stop): " 
           <<std::endl;
  std::cin>>payCode;

  while(payCode!=5){
   //std::cout<<"code:";
   //std::cin>>payCode;
   switch(payCode){
      case 1:
       std::cout<<"Enter the weekly salary for managers:";
       std::cin>>salary;
       std::cout<<"The weekly salary for managers is:K "
                <<salary;
       std::cout<<endl;
       std::cout<<endl;
       break;
      
      case 2:
      std::cout<<"Enter the hourly wage:";
      std::cin>>salary;
      std::cout<<"Enter the hours worked ";
      int totalHrs;
      std::cin>>totalHrs;
       if(totalHrs<=normalHours)
        wage=totalHrs*salary;
       if(totalHrs>normalHours){
        int overtime=totalHrs-normalHours;
        int overtimeWage=overtime*1.5*salary;
       wage=salary*normalHours+overtimeWage;
        }
       std::cout<<"The hourly worker's salary is:K "
                 <<wage;
       std::cout<<endl;
       std::cout<<endl;
       break;
    
      case 3:
      std::cout<<"Enter gross weekly sales: ";
      sales;
      std::cin>>sales;
      cSalary=250;
      grossWage=5.7*sales;
      salary=cSalary+grossWage;
      std::cout<<"The commission worker salary is:K "
               <<salary;
       std::cout<<endl;
       std::cout<<endl;
       break;
     
       case 4:
       std::cout<<"Enter the piece workers salary: ";
       std::cin>>salary;
       std::cout<<"Enter number of items sold: ";
       items;
       std::cin>>items;
       totalSalary=salary*items;
       std::cout<<"Piece worker's salary is:K "
                <<totalSalary;
        std::cout<<endl;
        std::cout<<endl;
       break;
    
      default:
      std::cout<<"Try again";
    std::cout<<endl;
    std::cout<<endl;}
    
   std::cout<<"Enter the employee's paycode(press 5 to stop): ";
   std::cin>>payCode ;
      
    
}
   
    
    //cout << "Hello,World!\n";
    return 0;
}