#include<iostream>
using namespace std;
void add(int , int);
void add(float , float);
void add(int , int , int);
int main()
{
    add(2,4);
   add(2 , 4.2);
   add(2,4,6);

   return 0;
}
void add(int a , int b)
{
    cout<<a+b<<"\n";
}
void add(float a , int b)
{
    cout<<a+b<<"\n";
}
void add(int a , int b , int c)
{
    cout<<a+b+c<<"\n";
}