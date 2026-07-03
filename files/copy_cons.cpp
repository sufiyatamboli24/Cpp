#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    demo()
    {
        a=10;
    }
    demo(demo & obj)
    {
        a=obj.a;
    } 
    void put()
    {
        cout<<"the value is:"<<endl<<a;
    }
};
int main()
{
  demo obj;
  obj.put();
  demo bb(obj);
  bb.put();

  return 0;
}