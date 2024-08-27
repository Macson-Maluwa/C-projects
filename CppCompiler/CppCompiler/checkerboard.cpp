#include<iostream>
//using namespace std;

int main()
{

   int rows;
   int n=1;
  // int cols=1;
   //int r=1;
   
   std::cout<<"How many rows:";
   std::cin>>rows;

   while(n<=rows)
    {  
      int cols=1;
       int r=1;
      if(n%2!=0){
       while(cols<=rows){
        std::cout<<"* ";
        //std::cout<<std::endl;
        ++cols;}
        }
     
        else {
         //std::cout<<std::endl;
         std::cout<< ' ';
         while(r<=rows){
         std::cout<<"* ";
        ++r;}
        }
        std::cout<<std::endl;
        ++n; 
    }
    
    return 0;
    
    
}