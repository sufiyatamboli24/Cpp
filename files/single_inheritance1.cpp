/*Create a base class Animal with data members name and sound.
Create a derived class Dog that adds a member breed.
Write a program to input and display details of a dog using inheritance*/
#include<iostream>
using namespace std;
class animal{
    protected :
    string n,a;
    public:
    void name()
    {
        cout<<"enter the name of animal:";
        cin>>n;
    }
    void sound()
    {
        cout<<"gusses the sound of animal:";
        cin>>a;
    }
};
class dog: public animal{
   protected:
    string d;
    public:
    void name1()
    {
        cout<<"the child inheretance animal name is:";
        cin>>d;
    } 
    void put()
    {
        cout<<"\nthe 1 animals name:"<<n;
        cout<<"\nthe 1 animals sound:"<<a;
        cout<<"\nthe child inheretance animal name is..."<<d;
    }
};
int main()
{
    dog da;
    da.name();
    da.sound();
    da.name1();
   da. put();

    return 0;
}