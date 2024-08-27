#include<iostream>
using namespace std;

int main()
{
    int n=1;
    
    cout<<"N\tN*10\tN*100\tN*1000\n\n";
    
    while(n<=5)
  {
    cout<<n<<"\t"<<n*10<<"\t"<<n*100<<"\t"<<n*1000<<endl;
     ++n;
  }
 return 0;
}