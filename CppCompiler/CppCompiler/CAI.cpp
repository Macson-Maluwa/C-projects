#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void askQuestion(int,int);
int main()
{
    int integer1;
    int integer2;
    int answer;
    int response;
    
    std::cout<<"Welcome to Computer assisted instruction.\n"
             <<"By Mackson.\n";
    
    srand(time(0));
    integer1= 1 + rand() % 9;
    integer2= 1 + rand() % 9;
    askQuestion(integer1,integer2);
    
    return 0;
}

 void askQuestion(int num,int nam)
 {
   //int integer1;
  // int integer2,
   int response;
   int answer;
   int comment;
   
   //integer1 = 1 + rand() % 9;
 //  integer2 = 1 + rand() % 9;
   
   std::cout<<" How much is "<<num<<
            " times "<<nam<<"?"<<std::endl;
   std::cin>>response;
   
   answer = num * nam;
   if(answer== response){
      comment= 1 + rand() % 4;
      switch(comment)
      {
       case 1:
       std::cout<<"Very good!\n";
       break;
       case 2:
       std::cout<<"Excellent!\n";
       break;
       case 3:
       std::cout<<"Keep up the good work!\n";
       break;
       case 4:
       std::cout<<"Nice work\n";
       break;
       default:
       std::cout<<"Programm should never reach here\n";
       }
      num= 1 + rand() % 9;
      nam= 1 + rand() % 9;
      askQuestion(num,nam);}
   else 
   { 
    comment= 1 + rand() % 4;
    switch(comment)
    {
     case 1:
     std::cout<<" No. Please try again.\n";
     break;
     case 2:
     std::cout<<" Wrong.Try once more.\n";
     break;
     case 3:
     std::cout<<"Don't give up!\n";
     break;
     case 4:
     std::cout<<"No. Keep trying.\n";
     break;
     default:
     std::cout<<"Programm should never reach here\n";
    }
    askQuestion(num,nam);}
    
     
    

             
}