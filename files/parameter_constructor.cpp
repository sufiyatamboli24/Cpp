#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int m,int n)
    {
        a=m;
        b=n ;
    }
    void put()
    {
        cout<<"The addition by using parameteriezed constuctor:"<<a+b;
    }
};
int main()
{
    demo obj(10,20);
    obj.put();

    
    return 0;
}