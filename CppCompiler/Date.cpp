#include<iostream>
using namespace std;
 
class Date
{
 public:
  Date(int,int,int);
  void setDay(int);
  void setMonth(int);
  void setYear(int);
  int getDay();
  int getMonth();
  int getYear();
  void showDate();
 private:
  int day;
  int month;
  int year;
 
};
Date::Date(int daY,int moNth,int yr)
{
  day= daY;
  month=moNth;
  year=yr;
}
void Date::setDay(int daY)
{
  if(daY<=31)
  day=daY;
  else
  cout<<" Day range should be 1-31"<<endl;
}
void Date::setMonth(int moNth)
{
  if(moNth<0)
   month=1;
  else
  month=moNth;
   
}
void Date::setYear(int yr)
{
 if(yr>=1900)
  year=yr;
 else
 cout<<"invalid entry"<<endl;
}
int Date::getDay()
{
 return day;
}
int Date::getMonth()
{
 return month;
}
int Date::getYear()
{
 return year;
}
void Date::showDate()
{
 cout<<"The date is: "<<day<<"/"<<month<<"/"
<<year<<endl;
}
int main()
{
 Date myDate(0,0,0);
/*int day;
int month;
int year;
cout<<"Enter any day\n"<<endl;
cin>>day;
cout<<"Enter Month\n"<<endl;
cin>>month;
cout<<"Enter year\n"<<endl;
cin>>year;
cout<<"default date is: "<<myDate.getDay()<<"/"<<myDate.getMonth()<<"/"<<myDate.getYear<<endl;*/
myDate.setDay(4);
myDate.setMonth(5);
myDate.setYear(2020);
myDate.showDate();
return 0;

}



