#include<iostream>
using namespace std;

int main()
{
   int counter=0;
   int answer;
   int choice;

   std::cout<<"QA.Define global warming:\n"
        <<"1.It's coming of Jesus.\n"
        <<"2.Increase change in temperature"
        <<" due to climate change\n"
        <<"3.cutting down of trees\n"
        <<"4.When the global feels warm\n";
   std::cin>>answer;
   if(answer==2)
     ++counter;
    std::cout<<std::endl;
    
   std::cout<<"QB.What causes global warming?\n"
        <<"1.Emission of harmful gases such as carbon dioxide\n"
        <<"2.Using materials thato produces heat such as cookers\n"
        <<"3.Soil erosion\n"
        <<"4.Land degradation";
    std::cin>>answer;
    if(answer==1)
     ++counter;
    std::cout<<std::endl;
    
    std::cout<<"QC.Another factor that contributes to global warming\n "
         <<"1.Over cultivation\n"
         <<"2.water pollution\n"
         <<"3.Rice cultivation\n"
         <<"4.Farming on slopes";
    std::cin>>answer;
    if(answer==3)
      ++counter;
    std::cout<<std::endl;
    
    std::cout<<"QD.What is the effect of global warming?\n "
         <<"1.End of global\n"
         <<"2.Coming of Jesus\n"
         <<"3. Poverty\n"
         <<"4.Formation of acidic rains";
    std::cin>>answer;
    if(answer==4)
      ++counter;
    std::cout<<std::endl;
    
    std::cout<<"QE.How can we prevent global warming?\n"
         <<"1.Planting of trees\n"
         <<"2.Don't use vehicles\n"
         <<"3.Construct strong houses that  can withstand acidice rains\n"
         <<"4.Stop rice cultivation\n";
    std::cin>>answer;
    if(answer==1)
     ++counter;
    std::cout<<std::endl;
    
    switch(counter){
     case 5:
     std::cout<<"Exellent";
     break;
     case 4:
     std::cout<<"Very good";
     break;
     case 3:
     case 2:
     case 1:
     case 0:
     std::cout<<"Know more about global warming\n"
          <<"search the Internet and read your geography books";
     break;
    }
    
   
    
     
    return 0;
}