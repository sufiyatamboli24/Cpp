/*Write a program to demonstrate single inheritance (Vehicle → Car).
Also, create an example of multiple inheritance (Teacher and Researcher
→ Professor).*/
#include<iostream>
using namespace std;
class vehicle
{
    public:
    string name;
    void get()
    {
        cout<<"\nEnter the vehicle name:";
        cin>>name;
    }
};
class car:public vehicle
{
    public:
    void put()
    {
        cout<<"\nthe car name is:"<<name;
    }

};
class teacher
{
    public:
    string name;
    void gett()
    {
        cout<<"\nEnter the name of teacher:";
        cin>>name;
    }
};
class researcher
{
    public:
    void putr()
    {
        cout<<"\nthe researcher";
    }
};
class professesor:public teacher,public researcher
{
   public:
   void putp()
  {
    cout<<"\nthe professor..";
  }
};

int main()
{
    car c;
    c.get();
    c.put();
    
    professesor p;
    p.gett();
    p.putr();
    p.putp();
    
    return 0;
}