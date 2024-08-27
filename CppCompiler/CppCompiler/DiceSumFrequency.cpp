#include<iostream>
using namespace std;
#include<iomanip>
#include<cstdlib>
#include<ctime>

class Dice
{ 
  public:
  Dice();
  void rollDie();
  void displayFrequency();

  private:
  static const int  Size = 13;
  int frequency[Size];
  int diceSum;
};

 Dice::Dice()
{ 
 for(int index = 0 ; index < Size; ++index)
  frequency[index] = 0;

 diceSum = 0;
 
}

 void Dice::rollDie()
{
  int die1;
  int die2;
  
 for(int roll = 0; roll<36000; ++roll){
  die1 = 1 + rand() % 6;
  die2 = 1 + rand() % 6;
  diceSum = die1 + die2 ;
  ++frequency[diceSum];}

}

void Dice::displayFrequency()
{
  std::cout<<"\n\n";
  std::cout<<"SUM"<<"     "<<"FREQUENCY\n";
  for(int loop =2;loop < Size; ++loop){
     std::cout<<setw(2)<<loop<<':'<<setw(14)<<frequency[loop];
     std::cout<<std::endl;}  
} 

int main()
{ 
    srand(time(0));
    Dice dice;
    dice.rollDie();
    dice.displayFrequency();
    return 0;
}