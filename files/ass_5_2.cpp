/*Write a program to demonstrate single inheritance (class Animal →
class Dog). Also, create a multiple inheritance example where class Music
and class Dance are inherited into a class StudentTalent*/
#include<iostream>
using namespace std;
class animal
{
    public:
    string name;
    void get()
    {
        cout<<"Enter the name of animal:";
        cin>>name;
    } 
};
class dog:public animal
{
    public:
   void put()
   {
    cout<<"\nName:"<<name;
    cout<<"\nthe class dog...";
   }
};
class music
{
    public:
    string music_name;
    void get()
    {
        cout<<"Enter the music name:";
        cin>>music_name;
    }
};
class dance
{
    public:
    string dance_name;
    void getd()
    {
        cout<<"\nenter the dance name:";
        cin>>dance_name;
    }
};
class talent:public music,public dance
{
    public:
    void put()
    {
     cout<<"\nMusic name:"<<music_name<<"\ndance name"<<dance_name;
     cout<<"\nthis is the talent class...";
    }
};
int main()
{
    dog d;
    d.get();
    d.put();

    talent t;
    t.get();
    t.getd();
    t.put();
    
    return 0;
}

