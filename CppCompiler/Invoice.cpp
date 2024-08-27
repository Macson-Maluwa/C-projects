#include<iostream>
#include<string>
using namespace std;

class Invoice
{
  public:
   Invoice(string,string,int,int);
   void setPart(string);
   void setDescript(string);
   void setQuantity(int);
   void setAmount(int);
   string getPart();
   string getDescript();
   int getQuantity();
   int getAmount();
   int getInvoiceAmount(); 
  private:
    string part;
    string descript;
    int quantity;
    int amount;
};
Invoice::Invoice(string p,string v,int a,int b)
{
  setPart(p);
  setDescript(v);
  setQuantity(a);
  setAmount(b);
  
}
 void Invoice::setPart(string p)
{ 
 part = p;
}
void Invoice::setDescript(string d)
{
 descript = d;
}
void Invoice :: setQuantity(int a)
{
  if(a < 0)
  quantity =0;
  else
  quantity = a;
}
void Invoice::setAmount(int b)
{
 if(b < 0)
  amount = 0;
 else
  amount = b;
}
string Invoice::getPart()
{
  return part;
}
string Invoice::getDescript()
{
 return descript;
}
int Invoice::getQuantity()
{
 return quantity;
}
int Invoice::getAmount()
{
 return amount;
}
int Invoice::getInvoiceAmount()
{
  return quantity*amount;
}
int main()
{
 Invoice myInvoice("first","for toilet",0,0);
 myInvoice.setPart("second");
 myInvoice.setDescript("plumbing");
 myInvoice.setQuantity(2);
 myInvoice.setAmount(1000);
 cout<<"\npart number is: "<<myInvoice.getPart()
     <<"\n description is: "<<myInvoice.getDescript()
    <<"\n quantity is: "<<myInvoice.getQuantity()
    <<"\n Amount per item is: "<<myInvoice.getAmount()
    <<"\n total amount is: "<<myInvoice.getInvoiceAmount()<<endl;
    return 0; 
}