#include<iostream>
using namespace std;

int main()
{
    int counter=1;
    int space=1;
    int rows=9;
    int cols=1;
    int num;
    int cols2=1;
    int counter2;
    int n=1;
    int rem;
     rem=rows/2+1;
     int space2=0;
     int cols3;
     int num3;
     int cols4;
    
    for(counter;counter<rows;++counter)
    {
      cols3=1;
      num3=1;
      cols4=1;
      num=1;
      //counter=1;
      counter2=1;
      // std::cout<<"\t";
       for(cols;cols<=rows-space;++cols)
         std::cout<<' ';
     // for(cols2;cols2>=counter;++cols2)
       if(counter==cols2)
        std::cout<<'*';
        
       std::cout<<std::endl;
       ++space;
    
      for(num;num<=rows-space;++num)
        std::cout<<' ';
        
      for(counter2;counter2<=space+counter;++counter2)
        std::cout<<'*';
       /* if(counter>rem)
        { std::cout<<std::endl;
         ++space2;
         for(cols3;cols3<=space2;++cols3)
           std::cout<<' ';
           for(num3;num3<=(rows-space2)-cols4;++num3)
           std::cout<<'*';}*/
          
       
    
    }
    return 0;
}