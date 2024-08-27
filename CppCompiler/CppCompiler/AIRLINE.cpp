#include<iostream>
#include<cctype>
using namespace std;
#define SIZE 10
 int seat[SIZE]={0};
void menu(void);
void firstClass(void);
void economyClass(void);

int main(void)
{ 
  menu();
 return 0;
  
}
 void menu(void)
{
  int choice;
  std::cout<<"WELCOME TO AUTOMATED AIRLINE RESERVATION SYSTEM\n";
  std::cout<<"1.First class\n"
           <<"2.Economy class\n"
           <<"Enter your choice\n"
           <<' ';
 std::cin>>choice;
 if(choice==1)
  firstClass();
 if(choice==2)
  economyClass();
}

 void firstClass(void)
{
 static int index=0;
 if(index<=4){
  seat[index]=index + 1;
  std::cout<<"Your seat number is: "
           <<seat[index]<<std::endl;
  std::cout<<"In the FISRT CLASS\n";}

 if(index>4)
  {  
    char answer ='Y';
    char answer2;
    std::cout<<"FIRST CLASS Full\n"
             <<"Do you want to be redirected to the ECONOMY CLASS(Y/N)\n";
    std::cin>>answer2;
    if(answer==toupper(answer2))
     economyClass();
    if(answer!=toupper(answer2))
      std::cout<<"Next flight leaves in 3 HRS\n";}   
 ++index;
 menu();

}
void economyClass()
{
  static int index=5;
  if(index<=9){
  seat[index]=index + 1;
  std::cout<<"Your seat number is: "
           <<seat[index]<<std::endl;
  std::cout<<"In the ECONOMY CLASS\n";}
 if(index>9){
   char answer='Y';
   char answer2;
  std::cout<<"ECONOMY CLASS FULL\n"
           <<"Do you want to be redirected to the FIRST CLASS(Y/N)\n";
  std::cin>>answer2;
   if(answer==toupper(answer2))
    firstClass();
   if(answer!=toupper(answer2))
     std::cout<<"Next flight leaves in 3HRS\n";}
  ++index;
  menu();
  
}
 