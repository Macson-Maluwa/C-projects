#include<iostream>
#include<cmath>
#include<cctype>

#define PI 3.14159
//using namespace std;
int main()
{
 double radius;
 double diameter;
 double circum;
 double area;
 //char answer1='Y';
 //char answer2='Y';
 int choice =0;
 
 while(choice!=4){

    std::cout<<"\n1.To find diameter.\n"
             <<"2.To find circumference.\n"
             <<"3.To find area.\n"
             <<"4.To quit.\n"
             <<"choose your calculation: "
             <<std::endl;
   std::cin>>choice;
   if(choice>=1&&choice<=3){
    std::cout<<"Enter the value for radius: ";
    std::cin>>radius;}
    
   switch(choice){
    case  1:
    diameter=2*radius;
    std::cout<<"Diameter: "<<diameter
             <<std::endl;
    break;
    case 2:
    circum=2*PI;
    std::cout<<"Circumference: "<<circum
             <<std::endl;
    break;
    case 3:
    area=PI*radius*radius;
    std::cout<<"Area: "<<area<<std::endl;
    break;
    case 4:
    std::cout<<"Good bye!"  ;
    break;
    default:
    std::cout<<"Invalid entry\nPlease retry: " ;
    }    
    }
    return 0;  
 }