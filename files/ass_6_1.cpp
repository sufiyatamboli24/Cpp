/*Write a program to demonstrate multilevel inheritance (Grandparent →
Parent → Child), hierarchical inheritance (base class 'Shape' → derived
classes 'Circle' and 'Rectangle'), and hybrid inheritance (class 'Student' +
class 'Sports' → class 'Result').*/
#include<iostream>
using namespace std;
class grandparent
{
    public:
    void putg()
    {
        cout<<"\ni am grandparent..";
    } 
};
class parent:public grandparent
{ 
    public:
    void putp()
    {
        cout<<"\n i am parent...";
    }

} ;
class child:public parent
{
    public:
    void putc()
    {
        cout<<"\ni am child...";
    }
};
//hirarical
class shape
{
    public:
    void puts()
    {
        cout<<"\n the shapes:";
    }
};
class rectangle:public shape
{
    public:
    void putr()
    {
        cout<<"\nthe shape is rectangle..";
    }
};
class circle:public shape
{
    public:
    void putc()
    {
        cout<<"\nthe circle shape..";
    }
};
//hybrid
class student
{
    public:
    string name;
    void gets()
    {
        cout<<"\nEntert the name of student:";
        cin>>name;
    }
};
class sport
{
    public:
    string sport_name;
    void getsp()
    {
        cout<<"\nEnter the sport name:";
        cin>>sport_name;
    }
};
class result:public student,public sport
{
    public:
    void put()
    {
        cout<<"\nname:"<<name<<"\nsport name:"<<sport_name;
        cout<<"\nthis is the result class...";
    }
};
int main()
{
    child c;
    c.putg();
    c.putp();
    c.putc();

    circle ci;
    ci.putc();
    ci.puts();

    rectangle r;
    r.putr();

    result re;
    re.gets();
    re.getsp();
    re.put();
   
    return 0;
}