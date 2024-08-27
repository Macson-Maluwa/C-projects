#include<iostream>
using namespace std;

int main()
{
    int counter=1;
    int largest=0;
    int number;
    
    while(counter<=10)
   {
    cout<<"Enter number: ";
    cin>>number;
    
    if(number>largest)
    {
       largest=number;
       cout<<"largest : "<<largest<<endl;
    }
    ++counter;
   }
return 0;
}