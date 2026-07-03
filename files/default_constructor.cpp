#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo()   //constuctor......
    {
        a=10;
        b=20;
    }
    void put()
    {
    cout<<"A="<<a<<" B="<<b<<endl<<"the addition of a and b is:"<<a+b;
    }
};
int main()
{
    demo obj;
    obj.put();

    return 0;
}