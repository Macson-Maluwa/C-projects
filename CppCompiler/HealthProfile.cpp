#include<iostream>
#include<string>
using namespace std;
class HealthProfile
{

 public:
HealthProfile(string,string,char,int,int,int,int,int);
void setName(string);
void setSurname(string);
void setGender(char);
void setHeight(int);
void setWeight(int);
void setDay(int);
void setMonth(int);
void setYear(int);
string getName();
string getSurname();
char getGender();
int getHeight();
int getWeight();
int getDay();
int getMonth();
int getYear();
void getAge();
void calcu_MaxHeartRate(int);
void calcu_TargetHeartRate(int);
void calcu_BMI();

 private:
string name;
string surname;
char gender;
int height;
int weight;
int day;
int month;
int year;
};
HealthProfile::HealthProfile(string fName,string suRname,char sex,int daY,int moNth,int yr,int Height,int Weight)
{
name = fName;
surname = suRname;
gender = sex;
day = daY;
month = moNth;
year = yr;
height = Height;
weight = Weight;
}
void HealthProfile::setName(string fName)
{
name = fName;
}
void HealthProfile::setSurname(string suRname)
{
 surname = suRname;
}
void HealthProfile::setGender(char sex)
{
 gender = sex;
}
void HealthProfile::setDay(int daY)
{
day = daY;
}
void HealthProfile::setMonth(int moNth)
{
 month = moNth;
}
void HealthProfile::setYear(int yr)
{
 year = yr;
}
void HealthProfile::setHeight(int Height)
{
height = Height;
}
void HealthProfile::setWeight(int Weight)
{
 weight = Weight;
}
string HealthProfile::getName()
{
 return name;
}
string HealthProfile::getSurname()
{
 return surname;
}
int HealthProfile::getDay()
{
 return day;
}
int HealthProfile::getMonth()
{
 return month;
}
int HealthProfile::getYear()
{
 return year;
}
char HealthProfile::getGender()
{
 return gender;
}
int HealthProfile::getHeight()
{ 
 return height;
}
int HealthProfile::getWeight()
{
 return weight;
}
void HealthProfile::getAge()
{
 int Day=5;
 int Month=5;
 int Year=2020;
 int Age;
/*cout<<"Enter current day\n"<<endl;
cin>>Day;
cout<<"Enter current month\n"<<endl;
cin>>Month;
cout<<"Enter current year\n"<<endl;
cin>>Year;*/
Age = Year - year;
cout<<" Your age is:"<<Age<<endl;
calcu_MaxHeartRate(Age);
return;
}
void HealthProfile::calcu_MaxHeartRate(int age)
{
 int maxHeartRatePerMin = 220;
 maxHeartRatePerMin=maxHeartRatePerMin-age;
cout<<" Your Maximum heart rate per minute is:"<<maxHeartRatePerMin<<endl;
calcu_TargetHeartRate(maxHeartRatePerMin);
}
void HealthProfile::calcu_TargetHeartRate(int max)
{
 int target = 0;
 target = max * 0.5;
cout<<" Your target heart rate is:"<<target<<endl;
}
void HealthProfile::calcu_BMI()
{
 int bmi;
 bmi = weight/(height*height);
cout<<"The BMI VALUES TABLE\n"<<"underweight:\tless than 18.5\n"
<<"normal:\tbetween 18.5 and 24.9\n"
<<"overweight:\tbetween 25 and 29.9\n"
<<"obese:\t30 or greater\n"<<endl;
cout<<" Your body mass index is:"<<bmi<<endl;
}

int main()
{
 string name;
 string surname;
 int day;
 int month;
 int year;
 int height;
 int weight;
 char gender;
 HealthProfile myHealth("Mackson","Maluwa",'M',0,0,0,0,0);
cout<<"Welcome to Health Profile book developed by:"<<myHealth.getName()<<" "<<myHealth.getSurname()<<endl;

/*cout<<"Enter your First Name\n"<<endl;
cin>>name;

cout<<"Enter your Last Name\n"<<endl;
cin>>surname;*/

//cout<<"Enter born day\n"<<endl;
//cin>>day;
myHealth.setDay(19);

//cout<<"Enter born month\n"<<endl;
//cin>>month;
myHealth.setMonth(8);

//cout<<"Enter born year\n"<<endl;
//cin>>year;
myHealth.setYear(1997);

//cout<<" Enter gender(M/F)"<<endl;
//cin>>gender;
myHealth.setGender('M');

//cout<<"Enter height in meters\n"<<endl;
//cin>>height;
myHealth.setHeight(2);
//cout<<"Enter weight in KGs\n"<<endl;
//cin>>weight;
myHealth.setWeight(100);

cout<<"Your First Name is:"<<myHealth.getName()<<"\n"
<<"Your Last Name is:"<<myHealth.getSurname()<<"\n"
<<"Your sex is:"<<myHealth.getGender()<<"\n"
<<"Date of Birth is:"<<myHealth.getDay()<<"/"<<myHealth.getMonth()<<"/"<<myHealth.getYear()<<"\n"
<<"Your height is:"<<myHealth.getHeight()<<"\n"
<<"Your weight is:"<<myHealth.getWeight()<<"\n"<<endl;

myHealth.getAge();
myHealth.calcu_BMI();
return 0;
}


