#include<iostream>
#include<cmath>
#include<cctype>
 int main()
{
  int tempA;
  int num;
  int tempB;
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  int choice=0;
  char answer1='Y';
  char answer2='Y';
  int aA;
  int bB;
  int cC;
  int dD;

 while(answer1!='N'){
   if(answer2!='N'){

 std::cout<<"\n1.To encrypt clear integers."
          <<"\n2.To dencrypt cipher digits."
          <<"\n Choose cryptography option."
          <<std::endl;
 std::cin>>choice;}

 switch(choice){
  case 1:
 std::cout<<"Enter a 4 digit number to be encrypted: ";
 std::cin>>num;
 //separating
  a=num%10;
  b=num/10;
  c=b%10;
  d=b/10;
  e=d%10;
  f=d/10;
  g=f%10;
//rearranging
   aA=(g+7)%10;
   bB=(e+7)%10;
   cC=(c+7)%10;
  dD=(a+7)%10;
//swapping
  tempA=aA;
  aA=cC;
  tempB=bB;
  bB=dD;
  cC=tempA;
  dD=tempB;
  std::cout<<"The ciphered data is:"
           <<aA<<bB<<cC<<dD
           <<std::endl;
  break;
  case 2:
  std::cout<<"Enter a 4 digit number to be dencrypted:";
  std::cin>>num;
 // separating
  a=num%10;
  b=num/10;
  c=b%10;
  d=b/10;
  e=d%10;
  f=d/10;
  g=f%10;
 //arranging and calculation
  aA=(g+3)%10;
  bB=(e+3)%10;
  cC=(c+3)%10;
  dD=(a+3)%10;
// swapping
 tempA=aA;
  aA=cC;
 tempB=bB;
  bB=dD;
 cC=tempA;
 dD=tempB;
 std::cout<<"The dencrypted data is:"
          <<aA<<bB<<cC<<dD
          <<std::endl;
   }
 std::cout<<"Do you want to perform another CRYPTOGRAPHY\?:(Y/N)";
 std::cin>>answer1;
    //if(answer1!='N'){
     //std::cout<<"Do you want to encrypthe again\?:(Y/N)";
    // std::cin>>answer2;}
 }
  
  std::cout<<"Goodbye!";
  

        
   return 0;
}