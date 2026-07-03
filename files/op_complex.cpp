#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void get()
    {
        cout<<"Enter the real and imaginary number:";
        cin>>r>>i;
    }
    void put()
    {
        cout<<"\n"<<r<<"+i"<<i;
    }
    complex operator +(complex obj2)
    {
        complex obj3;
        obj3.r=r+obj2.r;
        obj3.i=i+obj2.i;

        return obj3;
    }
};
int main()
{
   complex obj1,obj2,obj3;
    obj1.get();
    obj2.get();
    obj3=obj1+obj2;
    obj1.put();
    obj2.put();
    obj3.put();

  return 0;
}