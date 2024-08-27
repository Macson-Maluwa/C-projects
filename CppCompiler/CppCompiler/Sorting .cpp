#include<iostream>
using namespace std;
void sort(int [],int,int*,int*);
int main()
{
    const int Size =4;
    int order[Size];
    int equalCounter=0;
    int lessThanCounter=0;
    
    std::cout<<"Enter 4 Elements in\n"<<" an array data structure:\n";
    for(int counter=0;counter<Size;++counter)
     std::cin>>order[counter];
    
    std::cout<<"The unsorted elements are:\n";
    for(int loop=0;loop<Size;++loop)
    std::cout<<order[loop]<<' ';
    std::cout<<"\n";
    sort(order,Size,&equalCounter,&lessThanCounter);
    //for(int index1=0;index1<Size;++index1)
     //if(order[index1]==order[index1+1])
      // ++equalCounter;
    if(equalCounter!=Size-1 && lessThanCounter != Size-1){
     std::cout<<"The sorted elements are:\n";
     for(int index=0;index<Size;++index)
     std::cout<<order[index]<<' ';}
    else
      for(int loop=0;loop<Size;++loop)
       std::cout<<order[loop]<<' ';
  return 0;
}

//Function to sort an array

void sort(int array[],int max,int* equal,int* less)
{
  
  int temp=0;
 for( int counter=0;counter<max-1;++counter){
   for(int loop=1;loop<max;++loop){
     if(array[counter]>array[loop+counter] && counter+loop<max){
      temp=array[loop+counter];
      array[loop+counter]=array[counter];
      array[counter]=temp;}
      else if(array[counter]<array[loop+counter] && counter + loop < max)
        ++*less;
      else if(array[counter]==array[loop+counter] && counter + loop < max)
      ++*equal; }
    if(*equal==max-1){
     std::cout<<"The elements are equal:\n";
     counter=max-1;}
    if(*less==max-1){
     std::cout<<"The elements are in ascending order:\n";
     counter=max-1;}
      
        }
      
 }
    