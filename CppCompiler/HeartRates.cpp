#include<iostream>
#include<string>
using namespace std;

class HeartRates
{
 public:
  HeartRates(string,string,int,int,int);
  void setName(string);
  void setSurname(string);
  void setDay(int);
  void setMonth(int);
  void setYear(int);
  string getName();
  string getSurname();
  int getDay();
  int getMonth();
  int getYear();
  int getAge();
  int getMaxHeartRate(int);
  int getTargetHeartRate(int);
 private:
 string name;
 string surname;
 int day;
 int month;
 int year;
};
HeartRates::HeartRates(string fName,string suRname,int daY,int moNth,int yr)
{
  name = fName;
  surname = suRname;
  day = daY;
  month = moNth;
  year = yr;
}
void HeartRates::setName(string fName)
{
  name = fName;
}
void HeartRates::setSurname(string suRname)
{
 surname = suRname;
}
void HeartRates::setDay(int daY)
{
 day = daY;
}
void HeartRates::setMonth(int moNth)
{
 month = moNth;
}
void HeartRates::setYear(int yr)
{
 year = yr;
}
string HeartRates::getName()
{
 return name;
}
string HeartRates::getSurname()
{
 return surname;
}
int HeartRates::getDay()
{
 return day;
}
int HeartRates::getMonth()
{
 return month;
}
int HeartRates::getYear()
{
  return year;
}
int HeartRates::getAge()
{
 int c_day;
 int c_month;
 int c_year;
 int age;
cout<<"Enter  current day\n"<<endl;
cin>>c_day;
cout<<"Enter current month\n"<<endl;
cin>>c_month;
cout<<"Enter current year\n"<<endl;
cin>>c_year;
 age = c_year - year;
 cout<<"Age:"<<age<<endl;
getMaxHeartRate(age);
return age;
}
int HeartRates::getMaxHeartRate(int age)
{
 int heartBeatsPerMin = 220;
 int maxHeartRatePerMin;
  maxHeartRatePerMin = heartBeatsPerMin-age;
 cout<<"Maximum heart rate perminute:"<<maxHeartRatePerMin<<endl;
getTargetHeartRate(maxHeartRatePerMin);
return maxHeartRatePerMin;
}
int HeartRates::getTargetHeartRate(int maxHeartRatePerMin)
{
  int target;
  target=maxHeartRatePerMin*0.5;
cout<<"Atleast target heart rate:"<<target<<endl;
return target;
}
int main()
{
 HeartRates myRates("Mackson","Maluwa",0,0,0);
string name;
string surname;
int day;
int month;
int year;
cout<<"This is target heart calculator "
<<" developed by: "<<myRates.getName()<<" "<<myRates.getSurname()
<<endl;
cout<<"Enter your First Name\n"<<endl;
cin>>name;
cout<<"Enter your Last Name\n"<<endl;
cin>>surname;
cout<<"Enter the born day\n"<<endl;
cin>>day;
cout<<"Enter the born month\n"<<endl;
cin>>month;
cout<<"Enter the year born\n"<<endl;
cin>>year;
myRates.setName(name);
myRates.setSurname(surname);
myRates.setDay(day);
myRates.setMonth(month);
myRates.setYear(year);
myRates.getAge();
cout<<"Full name:"<<name<<" "<<surname<<endl;
cout<<"Date of Birth:"<<day<<"/"<<month<<"/"<<year<<endl;
return 0;


}




