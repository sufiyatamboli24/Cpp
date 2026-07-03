/*Write a program to demonstrate single inheritance (class 'Person' →
class 'Employee') and multiple inheritance (class 'Sports' and class 'Marks'
→ class 'Result'). Accept and display details of a student’s performance.
*/
#include<iostream>
using namespace std;
class person{
    public:
    string name;
    public:
    void get()
    {
        cout<<"Enter the name:";
        cin>>name;
    }
};
class employee:public person{
    public:
    int ID;
    public:
    void gete()
    {
    cout<<"\nEnter the id of person:";
    cin>>ID;
    }
    void put()
    {
        cout<<"name:"<<name<<"\nID:"<<ID;
    }
};
//multiple
class sport{
    public:
    string sport_name;
    public:
    void get()
    {
      cout<<"\nEnter the name of sport:";
      cin>>sport_name;
    }
};
class marks{
    public :
    int sport_marks;
    public:
    void getm()
    {
        cout<<"\nEnter the marks of sport:";
        cin>>sport_marks;
    }
};
class result:public sport,public marks
{
  public:
  void put()
  {
    cout<<"\nsport name:"<<sport_name<<"\nsport marks:"<<sport_marks;
  }
};
int main()
{
    employee obj;
    obj.get();
    obj.gete();
    obj.put();

    result r;
    r.get();
    r.getm();
    r.put();

    return 0;
}