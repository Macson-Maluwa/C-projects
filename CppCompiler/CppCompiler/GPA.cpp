#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;

class GradeAvgpoint
{
  public:
   GradeAvgpoint(string);
   void setCourseName(string);
   string getCourseName();
   void setGrade();
   void displayAVGP();
   void displayMessage();
   
  private:
   string courseName;
   int grade;
   int gradeCounter;
   int totalAvGP;
   int gradeA_Counter;
   int gradeB_Counter;
   int gradeC_Counter;
   int gradeD_Counter;
   int gradeF_Counter;
   double gradePointAvg;
   int numberOfCourses;
};
   GradeAvgpoint::GradeAvgpoint(string name)
   {
     setCourseName(name);
     gradeCounter=0;
     totalAvGP=0;
     gradeA_Counter=0;
     gradeB_Counter=0;
     gradeC_Counter=0;
     gradeD_Counter=0;
     gradeF_Counter=0;
    }
    
  void GradeAvgpoint::setCourseName(string course_Name)
   {
     if(course_Name.length() >= 25){
       courseName=course_Name.substr(0,25);
       std::cout<<"Course Name: "<<course_Name<<" \n"<<"has exceed the set limit\n";
       std::cout<<"The required Course name is:\n"
                <<getCourseName();
       std::cout<<endl;}
    
     else
       { 
        std::cout<<std::endl;
        courseName=course_Name;
        //std::cout<<getCourseName();
       }
   } 
    
   string GradeAvgpoint::getCourseName()
 {
   return courseName;
 }

 void GradeAvgpoint::setGrade()
  { 
    char upper_lowerGrade;
    int a_Counter=0;
    int b_Counter=0;
    int c_Counter=0;
    int d_Counter=0;
    int f_Counter=0;
    
    
    std::cout<<"Enter Grade (To stop Enter G): ";
    std::cin>>upper_lowerGrade;
    std::cout<<std::endl;
    
    grade=toupper(upper_lowerGrade);
    
    //if(grade =='A'||'B'||'C'||'D'||'F')
      //++gradeCounter;
    
    while(grade!='G'){
    
     switch(grade){
    
      case 'A': 
      ++gradeA_Counter;
      a_Counter=gradeA_Counter*4;
      break;
    
      case 'B':
      ++gradeB_Counter;
      b_Counter=gradeB_Counter*3;
      break;
    
      case 'C':
      ++gradeC_Counter;
      c_Counter=gradeC_Counter*2;
      break;
     
      case 'D':
      ++gradeD_Counter;
      d_Counter=gradeD_Counter*1;
      break;
    
      case 'F':
      ++gradeF_Counter;
      f_Counter=gradeF_Counter*0;
      break;
    
     default:
     std::cout<<"Error! Try again";
     std::cout<<std::endl;
     } 
    
    
    std::cout<<"Enter grade (Enter G to stop): ";
    std::cin>>upper_lowerGrade;
    
    grade=toupper(upper_lowerGrade);
    //if(grade=='A'||'B'||'C'||'D'||'F')
     //++gradeCounter;
  }
    
  totalAvGP=a_Counter+b_Counter+c_Counter+d_Counter+f_Counter;
  numberOfCourses=gradeA_Counter + gradeB_Counter + gradeC_Counter + gradeD_Counter + gradeF_Counter;//gradeCounter; 
  gradePointAvg=(double)totalAvGP/numberOfCourses;
  std::cout<<std::endl;
  displayMessage();
  
   }

 void GradeAvgpoint::displayAVGP()
 {
   std::cout<<std::endl;
   std::cout<<"Total number of courses sat is: "<<numberOfCourses;
   std::cout<<"\n\nYour grade point average is: "<<setprecision(2)<<gradePointAvg;
   std::cout<<::endl;
   switch((int)gradePointAvg)
    {
      case 4:
      std::cout<<"EXCELLENT!!";
      break;
      case 3:
      std::cout<<"VERY GOOD!!";
      break;
      case 2:
      case 1:
      case 0:
      std::cout<<"PULL UP YOUR SOCKS\n";
      break;}
 }

 void GradeAvgpoint::displayMessage()
 {
   std::cout<<"Welcome to Grade book for:\n"<<getCourseName();
   std::cout<<std::endl;
   displayAVGP();
 }
  

int main()
{  
   GradeAvgpoint myCourse("Introduction to C++ PROGRAMMING LANGUAGE");
   myCourse.getCourseName();

   string name;
  std::cout<<std::endl;

  std::cout<<"Enter the course name:\n";
  getline(std::cin,name);
  //std::cout<<std::endl;

  myCourse.setCourseName(name);
  //myCourse.getCourseName();
 // std::cout<<std::endl;
  myCourse.setGrade();
    
    return 0;
}