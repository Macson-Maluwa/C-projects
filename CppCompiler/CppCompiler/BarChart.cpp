#include<iostream>
using namespace std;

int main()
{   
    int a[11]={0,0,0,0,0,1,2,3,4,5,1};
    cout<< "Grade distribution:"<<endl;
    for(int i=0; i<11;i++)
    {
      if(i==0)
        cout <<" 0-10:";
      else if(i==10)
        cout <<"  100:";
      else
        cout << i*10<<"-"<<i*10+9<<":";
        
      for(int star=0;star<a[i];++star)
         cout <<"*";
      cout << endl;
        
    }
    
    return 0;
}