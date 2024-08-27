#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
 int account_no;
 double credit;
 double charges;
 double balance;
 double credit_limit;
 double new_balance;
cout<<"Enter account no(-1 to quit): ";
cin>>account_no;
while(account_no != -1)
{ 
 cout<<"Enter balance: ";
 cin>>balance;

cout<<"Enter total charges: ";
cin>>charges;

cout<<"Enter total credit: ";
cin>>credit;

cout<<"Enter credit limit: ";
cin>>credit_limit;
 new_balance=balance+charges-credit;
if(new_balance>credit_limit)
{
   cout<<"Account number: "<<account_no<<endl;
   cout<<"credit limit: "<<credit_limit<<endl;
   cout<<"New balance: "<<setprecision(2)<<fixed<<new_balance<<endl;
   cout<<"Credit Limit Exceeded"<<endl;
}
 else
   cout<<"New balance: "<<setprecision(2)<<fixed<<new_balance<<endl;

 cout<<"Enter account no(-1 to quit): ";
 cin>>account_no;
}
 return 0;

 
}