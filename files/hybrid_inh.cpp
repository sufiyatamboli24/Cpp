#include<iostream>
using namespace std;
class a{
    public:
    void get()
    {
        cout<<"hii this is a class\n";
    }
};
class b:public a{
    public:
    void get1()
    {
        cout<<"hii this is b class\n";
    }
};
class c{
    public:
    void get2()
    {
        cout<<"hii this is c class\n";
    }
};
class d:public b,public c{
    public:
    void get3()
    {
        cout<<"hii this is d class....drived by b and c class\n";
    }
};
int main()
{
    d obj;
    obj.get();
    obj.get1();
    obj.get2();
    obj.get3();

  return 0;
}