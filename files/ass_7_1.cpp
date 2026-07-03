/* Write a program to demonstrate function overloading by creating a
class 'Calculator' with multiple 'add()' functions: one for adding integers,
one for floating-point numbers, and one for three integers.*/
#include<iostream>
using namespace std;
class calculator
{
  
   public:
  int add(int a,int b)
   {
     return a+b;
   }
   float add(float a,float b,float c)
   {
    return a+b+c;
   }
   int add(int a,int b,int c)
   {
     return a+b+c;
   }
};
int main()
{
    calculator cal;
    cout<<"\naddition for 1 add function:"<<cal.add(5,10)<<endl;
    cout<<"\naddition for 2 add function:"<<cal.add(2.1f,1.2f,3.5f)<<endl;
    cout<<"\naddition for 3 add function:"<<cal.add(4,7,1)<<endl;

return 0;
}
