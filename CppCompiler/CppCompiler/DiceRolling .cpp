#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

enum Status{ WON,LOST,CONTINUE};

class Dice
{
  public:
  Dice();
  void callingFunction();
  int rollDie();
  void menu();

  private :
  Status gamestatus;
  int sum;
  int myPoint;
  int balance;
  int wager;
  int newBalance;
  int choice;

};

 Dice::Dice()
{
 sum=0;
 wager=0;
 myPoint=0;
 balance =1000; 
 newBalance=0;
 choice =1;
}

void Dice::callingFunction()
{
  std::cout<<"Enter wager:";
  std::cin>>wager;
 while (choice != 2){
 while(wager>balance)
  {
   std::cout<<"Enter wager:";
   std::cin>>wager;
  }
 sum=rollDie();

 switch(sum)
{
 case 7:
 case 11:
  gamestatus = WON;
 break;

 case 2:
 case 3:
 case 12:
  gamestatus = LOST;
 break;

 default:
  myPoint=sum;
  gamestatus = CONTINUE ;
  std::cout<<"My point is:"<<myPoint<<std::endl;

}
 while( gamestatus == CONTINUE )
{
  sum = rollDie();
  if(sum == myPoint)
   gamestatus = WON;
  if( sum == 7)
   gamestatus = LOST;
}
 
 if ( gamestatus == WON ){
  balance += wager;
  std::cout<<"Congrats!!You have won\n "
           <<"Your new balance is:"<<balance
           <<std::endl;
  std::cout<<"Do you want to play again?"
           <<"\n1.To continue\n2.To end"
           <<"\nEnter your choice:";
  std::cin>>choice;
  std::cout<<endl;
  std::cout<<"Enter wager:";
  std::cin>>wager;}
  if( gamestatus == LOST)
  {
    balance -= wager;
    if(balance == 0){
    std::cout<<"SORRY. You BUSTED\n";
    std::cout<<"Do you want to play again?\n";
    std::cout<<"1.To continue\n2.To end\nEnter your choice:";
    std::cin>>choice;
    std::cout<<std::endl;
    if(choice==1){
    std::cout<<"Enter the amount to be deposited :";
    std::cin>>newBalance;
    balance = newBalance ;
    std::cout<<"Enter wager:";
    std::cin>>wager;}} 
    else{
    std::cout<<"Sorry.You LOST.\n"
             <<"Your remaining  balance is:"
             <<balance;
    std::cout<<std::endl;
    std::cout<<"Do you want to play again?\n"  
             << "1.To continue.\n2.To end"
             <<"\nEnter your choice: ";
     std::cin>>choice;
     if(choice==1){
       std::cout<<"Enter wager: ";
       std::cin>>wager;}}
   }
 }
}


int Dice::rollDie()
{
 int die1;
 int die2;
 int dieSum;
 int cheer;
 
 cheer = 1 + rand() % 3;
 die1 = 1 + rand() % 6;
 die2 = 1 + rand() % 6;
 dieSum = die1 + die2;

switch(cheer){
 case 1:
  std::cout<<"UKUBWERA BHO\n";
  break ;
 case 2:
 std::cout<<"MOTO UNANDI.TIYENI NANZO\n";
 break;
 case 3:
 std::cout<<"OHHH ULI PAFUPI NDI KUWINA\n";
 break;}
std::cout<<"Player rolled\n "
          << die1<<' '<<'+'<<' '<<die2<<std::endl;
 std::cout<<"And the sum is:"<<dieSum; 
 std::cout<<std::endl;
 return dieSum;
}

int main()
{
    srand(time(0));
    Dice dice;
    dice.callingFunction();
    return 0;
}