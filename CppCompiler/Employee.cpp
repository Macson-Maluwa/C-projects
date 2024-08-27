#include<iostream>
#include<string>
using namespace std;

class Employee
{
  public:
  Employee(string,string,int);
  void setName(string);
  void setSurname(string);
  void setSalary(int);
  string getName();
  string getSurname();
  int getSalary();
  private:
  string name;
  string surname;
  int salary;
};
 Employee::Employee(string fName,string suRname,int mSalary)
{
  name = fName;
  surname = suRname;
  salary = mSalary;
}
void Employee::setName(string fName)
{
 name=fName;
}
void Employee::setSurname(string suRname)
{
 surname=suRname;
}
void Employee::setSalary(int mSalary)
{
 if(salary<0)
  salary = 0;
 else
  salary=mSalary;
}
string Employee::getName()
{
 return name;
}
string Employee::getSurname()
{
 return surname;
}
int Employee::getSalary()
{
 return(salary*12);
}

int main()
{
 Employee myEmployee("Mackson","Maluwa",1000);
 Employee myEmployee2("Khafellor","Sowoya",2000);
 string name;
 string surname;
 int Salary;
cout<<"Welcome to kingfisher limited\n"<<
myEmployee.getName()<<" "<<myEmployee.getSurname()
<<endl;
cout<<"Enter First Name\n"<<endl;
cin>>name;
cout<<" Enter Last Name\n"<<endl;
cin>>surname;
cout<<"Enter Monthly Salary\n"<<endl;
cin>>Salary;
myEmployee.setName(name);
myEmployee.setSurname(surname);
myEmployee.setSalary(Salary);
cout<<name<< " "<<surname<< " Your yearly salary is: "<<
myEmployee.getSalary()<<endl;
cout<<"monthly salary "<<
"after 10% increment is: "<<
Salary+100<<"\n"<<" and yearly salary"
<< " after 10% increament is: "
<<(Salary+100)*12<<endl;
cout<<"Welcome to kingfisher limited\n"
<<myEmployee2.getName()<<" "
<<myEmployee2.getSurname()<<endl;
cout<<"Employee no: 2\n"<<"Enter your Name\n"<<endl;
cin>>name;
cout<<"Enter surname\n"<<endl;
cin>>surname;
cout<<"Enter Monthly Salary\n"<<endl;
cin>>Salary;
myEmployee2.setName(name);
myEmployee2.setSurname(surname);
myEmployee2.setSalary(Salary);
cout<<name<<" "<<surname<<" Yearly salary is: "<<myEmployee2.getSalary()<<endl;
cout<<"Monthly salary after 10% "
<<"increament is: "
<<Salary+100<<"\n"<<"And after 10% "
<<"increament yearly salary is: "<<
(Salary+100)*12<<endl;
return 0;

}




