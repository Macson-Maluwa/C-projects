#include<iostream>
using namespace std;

int main()
{
   //int cols=1;
    int counter=1;
    //int num=1;
    int rows=8;
    int space=0;
   // std::cout<<"Enter the number of rows:\n";
    //std::cin>>rows;
    
    for(counter;counter<=rows;++counter)
  {  int cols=1;
      //++cols;
      int num=1;
      if(counter==num||counter>num)
       for(cols;cols<=space;++cols)
        std::cout<<' ';
      
      if(counter==counter)
       for(num;num<=rows-space;++num)
        std::cout<<'x';
      
      std::cout<<std::endl;
     ++space;
    // ++cols;
       
       
    
    //std::cout<<std::endl; 
    //std::cout<<"\b";
  }

    return 0;
}