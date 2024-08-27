#include<iostream>
#include<string>
using namespace std;

class Account
{  
  public:
  Account(int);
  void credit(int);
  void debit(int);
  int  getBalance();
  private:
  int balance;
  
};
Account::Account(int amount)
{  
  if(amount >= 0)
   balance = amount;
  if(amount < 0)
 { 
  balance = 0;
  cout<<"The balance is negative"
      <<endl;
 }
}
void Account::credit(int deposit)
{
  balance=balance+deposit;
}
void Account::debit(int withdraw)
{  
  if(balance >=withdraw)
    balance=balance-withdraw;
  else
  { 
 balance=balance;
   cout<<" Debit exceeded balance"
        <<balance<<endl;
  }
}
 int Account::getBalance()
{ 
  return balance;
  
  
}


int main()
{
    Account myAccount(1000000);
    Account myAccount2(2000000);
    myAccount.credit(5000000);
    myAccount.debit(6000000);
    myAccount2.credit(10000000);
    myAccount2.debit(8000000);
    cout<<"The remaining balance for account 1 is: "
         <<myAccount.getBalance()<<endl;
    cout<<"The remaining balance for account 2 is: "<<myAccount2.getBalance()<<endl;
    return 0;
}