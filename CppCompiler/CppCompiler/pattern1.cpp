#include<iostream>
using namespace std;

int main()
{
   // int cols=1;
    int n=1;
    //int num=1;
    int rows=8;
    
  //  std::cout<<"Enter the number of rows:\n";
   // std::cin>>rows;
    
    for(n;n<=rows;++n)
  {   int cols=0;
      ++cols;
      int num=1;
      if(n==cols||n>cols)
       for(cols;cols<=rows-n;++cols)
        std::cout<<' ';
      
      if(n==n)
       for(num;num<=n;++num)
        std::cout<<'x';
      
      std::cout<<std::endl;
       
       
    
    //std::cout<<std::endl; 
    //std::cout<<"\b";
  }

    return 0;
}