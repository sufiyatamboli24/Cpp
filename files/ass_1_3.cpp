/*Write a program to create a class Rectangle with data members length
and breadth. Add functions to calculate and display the area and
perimeter. Create objects and display results.*/
#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length,breadth,a,p;
    public:
    void get()
    {
        cout<<"Enter the length:";
        cin>>length;
        cout<<"Enter the breadth:";
        cin>>breadth;
    }
    void area()
    {
        a=length*breadth;
    }
    void parimeter()
    {
        p= 2*(length+breadth);
    }

    void put()
    {
        cout<<"Area:"<<a;
        cout<<"\nParimeter:"<<p;
    }
};
int main()
{
    rectangle obj;
    obj.get();
    obj.area();
    obj.parimeter();
    obj.put();

    return 0;
}
