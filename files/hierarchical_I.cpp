#include<iostream>
using namespace std;
class a
{
    public:
    void get1()
    {
        cout<<"these is the base class\n";
    }
};
class b:public a
{
    public:
    void get()
    {
        cout<<"these is the drived class b...\n";
    }
};
class c:public a
{
    public:
    void get2()
    {
        cout<<"these is the drived class c...\n";
    }
};
int main()
{
    c obj;
    b obj1;
    obj.get1();
    obj1.get();
    obj.get2();

    return 0;
}

