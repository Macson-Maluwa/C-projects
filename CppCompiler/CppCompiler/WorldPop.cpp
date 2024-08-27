#include<iostream>
#include<cmath>
#include<cctype>
#include<iomanip>
 int main()
{
   int year=2020;
   double tag;
   double expectedPop;
   double worldPop=8000000000;
   double changePerYear;
   double growthRate=1.05;
   tag=worldPop;

  std::cout<<"Year"<<std::setw(12)<<"World Pop."<<std::setw(15)<<"Change in Pop."<<std::endl;

  while(year<=2095){
   
   expectedPop=tag*growthRate;
   changePerYear=expectedPop-tag;
   tag=expectedPop;
 //std::cout<<expectedPop;
 //std::cout<<std::setw(6)<<"Year: "<<std::setw(12)<<"World Pop: "<<std::setw(8)<<"Change: "<<std::endl;
   std::cout<<std::setw(4)<<year<<":"<<std::setw(12)<<expectedPop<<":"<<std::setw(12)<<changePerYear<<std::endl;

   ++year;
    
}

 std::cout<<std::endl;
 std::cout<<"In Year 2034 the population would be double "
          <<"what it is today(2020)"
          <<"if the year's growth rate persists\n";
 std::cout<<std::endl;
 std::cout<<"TAKE CARE OF THE NATURAL RESOURCES!!\n";
 std::cout<<"FOR THE FUTURE GENERATIONS!!";

        
   return 0;
}