#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
 class Coin
{
  public:
  Coin();
  int flip();
  void displayFrequency();
  private:
  int tailCounter;
  int headCounter;
  int side ;
  int head;
  int tail;

};

Coin::Coin()
{
  tailCounter = 0;
  headCounter = 0;
}

int Coin::flip()
{
  
  side =  rand() % 2;
  if(side == 1)
   return 1;
  else
   return 0;
}

void Coin::displayFrequency()
{
  int choice;
  for(int counter = 0; counter < 100; ++counter){
   choice = flip();
   if(choice == 1)
     ++headCounter;
   else
     ++tailCounter;}
  std::cout << "SIDE"<<"     "<<"FREQUENCY\n";
  std::cout << "HEAD"<<setw(14)<<headCounter<<std::endl;
  std::cout << "TAIL"<<setw(14)<<tailCounter<<std::endl;

    
}
int main()
{  
    srand(time(0));
    Coin coin;
    coin.displayFrequency();
    return 0;
}