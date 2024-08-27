#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
 public:
     GradeBook(string,string);
     void setCourseName(string);
     void setTutorsName(string);
     string getTutorsName();
     string getCourseName();
     void displayMessage();
 private:
     string courseName;
     string tutorsName; 
};

GradeBook::GradeBook(string courseName,string tutorsName)
{
  setCourseName(courseName);
  setTutorsName(tutorsName);
}
void GradeBook::setCourseName(string name)
{
  courseName=name;
}
void GradeBook::setTutorsName(string name)
{ 
  tutorsName=name;
}
string GradeBook::getCourseName()
{
  return courseName;
}
string GradeBook::getTutorsName()
{
   return tutorsName;
}
void GradeBook::displayMessage()
{
 cout<<"Welcome to grade book for " <<getCourseName()<<"\"This course is presented by\":" <<getTutorsName()<<endl;
};

int main()
{
 GradeBook myGradeBook("C++ programming","Mackson Maluwa");
myGradeBook.displayMessage();
return 0;
}




