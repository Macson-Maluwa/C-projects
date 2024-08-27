#include<iostream>
using namespace std;

int main()
{   
    int n=1;
    int rows=8;
    int column=1;
    //int cols=1;
   // int r=1;
    
  //  cout << "Enter the side of the   ///    square:";
   // cin  >> rows;
    
    while(n<=rows)
    {  int r=1;
       int cols=1;
       
       //while(column<rows)
      
        if(column==n||n==rows){
         while(cols<=rows)
         {
          cout<<"*";
          ++cols;
        }}
        //++column;
        
       else
        {
       cout<<endl;
        cout<<"*";
        while( r<=rows-2)
        {
         cout<<' ';
         ++r;
        }
        cout<<"*";
        cout<<endl;
        }
        
        //++column;
        ++n;
     // }
    // ++n;
   }
    return 0;
}