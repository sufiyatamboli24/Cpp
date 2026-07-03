#include<iostream>
using namespace std;
class a
{
   protected :
   int x;
   public:
   void geta()
   {
    cout<<"enter the number x:";
    cin>>x;
   }
};
class b:public a
{
   protected:
   int y;
   public:
   void getb()
   {
    cout<<"enter the number y:";
    cin>>y;
   }
   void put()
   {
    cout<<"the addision of x and y is:"<<x+y;
   }
};
int main()
{
    b obj;
    obj.geta();
    obj.getb();
    obj.put();
return 0;
}
