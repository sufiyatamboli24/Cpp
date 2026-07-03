/*Write a program to demonstrate function overloading by creating
multiple print() functions: one to print an integer, one to print a float, and
one to print a string.*/
#include<iostream>
using namespace std;
class func
{
   public:
   int value(int v)
   {
    cout<<"Inter value:"<<v<<endl;
   }
   float value(float f)
   {
    cout<<"Enter the float value:"<<f<<endl;
   }
   string value(string s)
   {
    cout<<"Enter the string:"<<s<<endl;
   }
};
int main()
{
    func fu;
    int i=3;
    float fl=2.0;
    string st="chand";
    fu.value(i);
    fu.value(fl);
    fu.value(st);

    return 0;
}