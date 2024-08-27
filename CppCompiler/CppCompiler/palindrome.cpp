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
    int j;
    
    std::cout<<"Enter a 5 digit integer:"<<std::endl;
    std::cin>>integer;
    
    a=integer%10;
    b=integer/10;
    c=b%10;
    d=b/10;
    e=d%10;
    f=d/10;
    g=f%10;
    h=f/10;
    i=h%10;
    j=h/10;
    
    if(a==i&&c==g&&e==e)
    std::cout<<"it's a palindrome"<<std::endl;
    
    else
    std::cout<<"it's not a palindrome"<<std::endl;
    
    return 0;
    
}