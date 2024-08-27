#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Poll
{
  public:
  static const int issueSize=6;
  Poll(string[]);
  void displayIssues()const;
  void getResponses();
  void tableOfResponses();
  int getIssueAverage( int[]);
  void getMostVoted();
  void getLeastVoted();

  private:
  static const int rateSize=11;
  static const int numberOfPeople=5;
  double average;
  string issues[issueSize];
  int responses[issueSize][rateSize];
  
};

 Poll::Poll(string topics[])
{
 average=0.00;
 //issues[issueSize]={"IGNORE","POLITICS","HEALTH","EDUCATION","ECONOMY","AGRICULTURE"};

 for(int row=0;row<issueSize;++row)
  for(int column=0;column<rateSize;++column)
    responses[row][column]=0;

  for(int index=0;index<issueSize;++index)
    issues[index]=topics[index];
}

void Poll::displayIssues()const
{
  std::cout<<"RATE EACH ISSUE WITH A NUMBER\n"
           <<"FROM 1 UP TO 10. RATE ONE INDICATES\n"
           <<"LEAST IMPORTANT AND RATE 10 INDICATES\n"
           <<"MOST IMPORTANT\n\n";
  
  for(int row=1;row<issueSize;++row)
   std::cout<<"ISSUE:"<<row<<"  "<<issues[row]
        <<std::endl;
   
}

void Poll::getResponses()
{
  int rate;

  for(int index=0;index<numberOfPeople;++index)
   for(int row=1;row<issueSize;++row){
     std::cout<<"RATE ISSUE:"<<row<<std::endl;
     std::cin>>rate;
     responses[row][rate]=responses[row][rate]+rate;
     std::cout<<std::endl;
     displayIssues();}
    
    
}

void Poll::tableOfResponses()
{
  
  std::cout<<std::endl;
  std::cout<<std::endl;
  std::cout<<"ISSUES:   ";
  for(int index=1;index<rateSize;++index)
   std::cout<<"R:"<<index<<" ";
  std::cout<<"AVG";
  std::cout<<std::endl;
  
  for(int row=1;row<issueSize;++row){
    std::cout<<issues[row]<<"      ";
    std::cout<<setw(3);
   for(int column=1;column<rateSize;++column)
    std::cout<<responses[row][column]<<setw(4);
  average=getIssueAverage(responses[row]);
  std::cout<<setw(5)<<setprecision(2)<<fixed<<average;
  std::cout<<endl;}
  getMostVoted();
  getLeastVoted();
    
}

int Poll::getIssueAverage( int array[])
{
 int total=0;
 for(int row=1;row<rateSize;++row)
  total=total+array[row];
 return (double)total/10;
}

void Poll::getMostVoted()
{
 int largestPoint=0;
 int largest;
 string hold;
 
 std::cout<<std::endl;
 
 for(int row=1;row<issueSize;++row){
  largest=0;
  for(int column=1;column<rateSize;++column)
   largest=largest+responses[row][column];
   if(largest>largestPoint){
    largestPoint=largest;
    hold=issues[row];}}
 std::cout<<"MOST VOTED ISSUE:\n"
          <<hold<<" WITH "<<largestPoint<<" POINTS\n\n";
         
}
void Poll::getLeastVoted()
{
 int lowestPoint=1000;
 int total;
 string holD;
 std::cout<<std::endl;
 for(int row=1;row<issueSize;++row){
   total=0;
  for(int column=1;column<rateSize;++column)
   total=total+responses[row][column];
   if(total<lowestPoint){
    lowestPoint=total;
     holD=issues[row];}}
 std::cout<<"THE LEAST VOTED ISSUE:\n"
          <<holD<<" WITH "<<lowestPoint<<" POINTS"<<std::endl;
}

int main()
{
    string causes[Poll::issueSize]={"IGNORE","AGR.","EDU.","ECO.","HEA.","TEC."};
    //Poll poll;
    Poll poll(causes);
    poll.displayIssues();
    poll.getResponses();
    poll.tableOfResponses();
    return 0;
}