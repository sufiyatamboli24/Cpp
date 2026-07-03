#include<iostream>
using namespace std;
class a{
  protected:
  int roll;
  public:
  void get(){
  cout<<"enter the roll number of student:";
  cin>>roll;
  }
};
class b:public a{
  protected:
  int sub1,sub2;
  public:
  void get1(){
  cout<<"\nenter 2 subjects marks of student:";
  cin>>sub1>>sub2;
  }
  void put()
  {
    cout<<"\nmarks of two subjects\t"<<sub1<<"\t"<<sub2;
  }

};
class c:public b{
  protected:
  int sport;
  public:
  void get2(){
  cout<<"\nenter sports marks of student:";
  cin>>sport;
  }
  void put1()
  {
    cout<<"\nmarks of sport is \t"<<sport;
    cout<<"\nthe total marks of the students is "<<sub1+sub2+sport;
  }

};
int main()
{
    c obj;
    obj.get();
    obj.get1();
    obj.put();
    obj.get2();
    obj.put1();

    return 0;
}
