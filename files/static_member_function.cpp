#include<iostream>
using namespace std;
class demo
{
   int x;
   static int y;             //static data member...
   public:
   void get(int a)
   {
    x=a;
    y+=1;
   }
   void put()
   {
    cout<<"\tX="<<x<<"\tY="<<y;
   }
   static void myfun()    //static member function..
   {
  cout<<"\nstatic member's Y="<<y;
   }    
};
int demo::y;    
int main()
{
    demo obj;
    obj.get(5);
    obj.put();
    demo::myfun();            //calling of static member function..
   
    return 0;
}      