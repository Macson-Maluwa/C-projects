#include<iostream>
//using namespace std;

int main()
{   
    int integer;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int decimal;
    
    std::cout<<"Enter a  4 integer binary and see its a decimal equavalent:"<<std::endl;
    std::cin>>integer;
    
    a=integer%10;
    b=integer/10;
    c=b%10;
    d=b/10;
    e=d%10;
    f=d/10;
    g=f%10;
    h=f/10;
    
    decimal=a*1+c*2+e*4+g*8;
    std::cout<<"Decimal equivalent is:"<<decimal<<std::endl;
    
    return 0;
    
    
}