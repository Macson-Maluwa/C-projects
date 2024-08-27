#include<iostream>
using namespace std;

int main()
{
   //int cols=1;
    int counter=1;
    //int num=1;
    int rows=8;
    int space=0;
    int space2=0;
   // std::cout<<"Enter the number of rows:\n";
   // std::cin>>rows;
    
    for(counter;counter<=rows;++counter)
  {  int cols=1;
      //++cols;
      int cols2=1;
      int num3=1;
      int num=1;
      int num2=1;
      int num4=1;
      //if(counter==num||counter>num)
      for(num4;num4<=counter;++num4)
        std::cout<<'*';
        
        if(counter<rows)
        std::cout<<"\t";
        
       //for(cols;cols<=space;++cols)
      // std::cout<<' ';
      
      //if(counter==counter)
       ///for(num;num<=rows-space;++num)
        //std::cout<<'*';
        
      std::cout<<' ';
        
      for(num2;num2<=rows-space;++num2)
       std::cout<< '*';
    
   std::cout<<"\t";
   //std::cout<<' ';
   // if(cols<=space)
    for(cols;cols<=space2;++cols)
     //if(cols<=space2)
     std::cout<<' ';
   //  std::cout<<"\t";
    for(num;num<=rows-space2;++num)
    std::cout<<'*';
    
      
      std::cout<<std::endl;
     ++space;
     ++space2; 
    
  }

    return 0;
}