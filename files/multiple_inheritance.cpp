#include <iostream>
using namespace std;
class a{
    protected:
    int x;
    public:
    void get()
    {
        cout<<"enter the number for x:";
        cin>>x;
    }
};
class b{
    protected:
    int y;
    public:
    void get1()
    {
        cout<<"\nenter the number for y:";
        cin>>y;
    }
};
class c :public a,public b{
 public:
 void put()
 {
    cout<<"\nthe addition of x and y is:"<<x+y;
 }
};
int main()
{
    c obj;
    obj.get();
    obj.get1();
    obj.put();

    return 0;
}