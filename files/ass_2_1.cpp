/*Write a program to demonstrate the use of the scope resolution
operator to define member functions outside the class. Also, use a static
data member to count the number of objects created. Additionally, write a
function to swap two numbers using call by reference.*/
#include<iostream>
using namespace std;
class demo{
    int x,y;
    static int count;
    public:
   demo();

   void get();
   void put();
    static void showcount();

};

int demo::count=0;
demo::demo()
{
    count++;
}
void demo::get()
{
    cout<<"Enter the number X:";
    cin>>x;
    cout<<"Enter the number Y:";
    cin>>y;

}
void demo::put()
{
    cout<<"X:"<<x<<"\n"<<"Y:"<<y<<"\n";
}
void demo::showcount()
{
    cout<<"Total object createed:"<<count<<endl;
}
void swapnum(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main()
{
    demo obj;
    demo obj1;
    obj.get();
    obj1.get();
    obj.put();
    obj1.put();
   demo::showcount();
    int a,b;
    cout<<"Enter the number for a:";
    cin>>a;
    cout<<"Enter the number for b:";
    cin>>b;
    cout<<"Before Swap:"<<a <<b;
    swapnum(a,b);
    cout<<"\nafter Swap:"<<a <<b;

    return 0;
}

