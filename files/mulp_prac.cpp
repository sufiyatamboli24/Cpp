/*Create two classes Bird and Swimmer.

Bird has a method fly()

Swimmer has a method swim()
Now create a class Duck that inherits from both and test all methods.*/
#include<iostream>
using namespace std;
class Bird{
  public:
  void fly()
  {
    cout<<"these is the fly method of Bird class\n ";
  }
};
class Swimmer{
  public:
  void swim()
  {
    cout<<"these is the swim method of Swimmer class\n ";
  }
};
class Duck:public Bird,public Swimmer{
  public:
  void check()
  {
    cout<<"inherited from both the class sucssesfully..........";
  }

};

int main()
{
    Duck obj;
    obj.fly();
    obj.swim();
    obj.check();


return 0;
}
