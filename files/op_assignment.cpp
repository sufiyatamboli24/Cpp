#include<iostream>
using namespace std;
class demo
{
int a;
public:
void get()
{
    cout<<"Enter the number:";
    cin>>a;
}
void put()

{
    cout<<"\nThe value is:"<<a;
}
void operator =(demo obj1)
{
  a=obj1.a;
  cout<<"\n"<<a;
}
};
int main()
{
    demo obj,obj1;
    obj.get();
    obj1=obj;
    obj.put();
    cout<<"\nAfter using assignment operator the value is:\n";
    obj1.put();
    

    return 0;
}