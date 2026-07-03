#include<iostream>
using namespace std;
class demo
{
   int a,b;
   public:
   void get()
   {
    cout<<"Enter the number:";
    cin>>a>>b;
   }
   void put()
   {
    cout<<"A="<<a<<"\tB="<<b;
   }
};
int main()
{
   demo obj;
   obj.get();
   obj.put();

   return 0;
}
