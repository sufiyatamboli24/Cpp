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
    cout<<"\nThe original value is:"<<a;
}
void operator ++()
{
  a=a+1;
  cout<<"\nAfter using Pre Increment operator the value is:"<<a;
}
};
int main()
{
    demo obj;
    obj.get();
    obj.put();
    ++obj;

    return 0;
}