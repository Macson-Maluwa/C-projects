#include<iostream>
using namespace std;
        
 void duplicate(int [],int);
int main()
{
   const int Size =5;
   int dupli[Size];
   int nonDupli=0;
   int temp;
   int counter=0;
   
  std::cout<<"Enter element:1\n";
  std::cin>>dupli[counter];
  for( counter;counter<Size-1;++counter){
   std::cout<<"Enter element: "<<counter + 2<<std::endl;
   std::cin>>temp;
   if(dupli[counter]!=temp){
    dupli[counter+1]=temp;
    ++nonDupli;}
    }
  if(nonDupli < Size) {
    std::cout<<"The unique elements are:\n";
    for(int index=0;index < nonDupli;++index)
     std::cout<<dupli[index]<<' ';}
  else {
    std::cout<<"All elements are different:\n";
    for(int loop=0;loop<Size;++loop)
    std::cout<<dupli[loop]<<' '};
    return 0;
}
