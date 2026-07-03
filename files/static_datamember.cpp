#include<iostream>
using namespace std;
class demo 
{
    int a,b;
    static int z;                     //static variable z..
    public:
    void get(int x,int y)             //inline function is been used.
    {
        a=x;
        b=y;
        z+=1;                         //if z is not added by one then it we initillazed by 0.......because of its properties/rule.
    }
    void put()
    {
        cout<<"A="<<a<<"\tB="<<b<<"\tZ="<<z<<"\t";
    }
};
int demo ::z;
int main()
{
    demo obj1;
    demo obj2;
    obj1.get(5 ,10);
    obj2.get(20 ,30);
    obj1.put();
    obj2.put();

    return 0;
}
