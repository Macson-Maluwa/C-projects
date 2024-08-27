#include<iostream>
#include<iomanip>
using namespace std;
 const double rate=0.09;
 const int salary=200;
 const int sized=100;
 
 void getGross(int []);
 void findRange(int [],int );

int main()
{
   int sales[10]={0};
  getGross(sales);
  
    
    return 0;
}
 void getGross(int salesPer[])
{
  int number;
  std::cout<<"How many sales person\?:";
  std::cin>>number;

  for(int index=0;index<number;++index)
  {  
    int gross;
    std::cout<<"Enter gross sale for sale person "
             <<index+1<<':'<<std::endl;
    std::cin>>gross;
    salesPer[index]=(rate*gross)+salary;
  }
 findRange(salesPer,number);
}
 void findRange(int salesArray[],int size)
 { const int array=11;
   int counter[array]={};
  
   //for(int i=0;i<array;++i)
   //counter[i]=0;

   for(int index=0;index<size;++index){
     if(salesArray[index]>=1100)
      ++counter[10];
     if(salesArray[index]<1100)
   ++counter[salesArray[index]/100];}
  std::cout<<' '<<' '<<"Range"<<setw(17)<<"Frequency\n";
  //for(int number=0;number<size;++number)
  //{
    //if(number==0)
    // std::cout<< 200 <<'-'<<299<<':';
    //if(number==10)
    // std::cout<<"1000 and over:";
    //else
     // std::cout<< (number+2) *100<<'-'<< (number+2) *100+99<<':';
    for(int rating=2;rating<array;++rating){
      if(rating==2)
       std::cout<<' '<<' '<<200<<'-'<<299<<':';
     else if(rating==10)
      std::cout<<1000<<'-'<<"over:";
      else
       std::cout<<' '<<' '<<rating*100<<'-'<<rating*100+99<<':';
      std::cout<<setw(5)<<setw(13)<<counter[rating];
    std::cout<<std::endl; }
 //}
  }
    