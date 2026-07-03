/* Write a program to demonstrate the scope resolution operator by
defining a function outside the class. Also, create a class with a static
variable to count how many rectangles are created. Write a function that
swaps two integers using call by reference.*/
#include<iostream>
using namespace std;
class rectangle
{
    public:
   int length,breadth;
   public:
   static int count;
   rectangle(int l,int b)
   {
    length=l;
    breadth=b;
    count++;
   }
   void get();
   void put();
   static void showcount();

};
int rectangle::count=0;

void rectangle:: get()
{
    cout<<"\nEnter the length of rectangle:";
    cin>>length;
    cout<<"\nEnter the bridth of rectangle:";
    cin>>breadth;

}
void rectangle::put()
{
    cout<<"\nThe length: "<<length<<"\nThe breadth: "<<breadth;
}
void rectangle::showcount()
{
    cout<<"\ntotal no. of count:"<<count;
}
void swapnum(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    rectangle obj(2,3);
    rectangle obj1(1,4);
    obj.put();
    obj1.put();
    int a,b;
    cout<<"\nEnter the number for a:";
    cin>>a;
    cout<<"\nEnter the number for b:";
    cin>>b;
    cout<<"\nBefore swaping:"<<a<<b;
    swapnum(a,b);
    cout<<"\nafter swaping:"<<a<<b;
    cout<<"\ntotal no. of object count is:"<<rectangle::count;

return 0;
}