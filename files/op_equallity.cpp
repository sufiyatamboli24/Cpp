#include<iostream>
using namespace std;
class demo{
    int x;
    public:
    void get()
    {
      cout<<"Enter the number:";
      cin>>x;
    }
    void put()
    {
        cout<<"\n"<<x;
    }

    bool operator ==(demo obj2)     //taken bool because if statement returns true or false....
    {
      if(x==obj2.x)
      {
        return true;
      }
      else
      {
        return false;
      }
    }          
};
int main()
{
    demo obj1,obj2;
    obj1.get();
    obj2.get();
    obj1.put();
    if(obj1==obj2)
    {
        cout<<"\nthe number is equal....";
    }
    else
    {
        cout<<"\nthe number is unequal....";
    }

    return 0;
}
