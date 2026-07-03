/*Write a program to use the scope resolution operator to access a global
variable and a local variable with the same name. Also, create a class with
a static data member to count total accounts created. Use call by
reference to swap two account balances*/

// #include<iostream>
// using namespace std;
// //global declare
// int balance=10000;
// class account
// {
//     public:
//     int accbalance;
//     static int count;
//     account(int bal)
//     {
//         accbalance=bal;
//         count++;
//     }
// void put()
// {
//     cout<<" Account Balance: "<<accbalance;
// } 

// };
// int account::count=0;
// int swapbalance(int &a,int &b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     //local declare...
//     int balance=5000;
//     cout<<"\nlocal balance:"<<balance;
//     cout<<"\nglobal balance:"<<::balance;

//     account obj(1000);
//     account obj1(500);
//     obj.put();
//     obj1.put();
//     cout<<"\nbefore swaping:\n ";
//     obj.put();
//     obj1.put();
//     swapbalance(obj.accbalance,obj1.accbalance);
//     cout<<"\nAfter swapping:\n";
//     obj.put();
//     obj1.put();

//     cout<<"\ntotal number of count of object created:"<<account::count;
// return 0;
// }

#include<iostream>
using namespace std;
int balance=10000;
class account
{
    public:
    int accbalance;
    static int count;
    account(int b)
    {
        accbalance=b;
        count++;
    }
    void put()
    {
        cout<<"Account balance:"<<accbalance;
    }

};
int account::count=0;
int swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
  account obj(1000);
  account obj1(2000);
  int balance=5000;
  cout<<"\nLocal balance:"<<balance<<endl<<"\nGlobal balance"<<::balance;
  obj.put();
  obj1.put();
  cout<<"\nbefore swaping:";
  obj.put();
  obj1.put();
  swap(obj.accbalance,obj1.accbalance);
  cout<<"\nAfter swaping:";
  obj.put();
  obj1.put();

cout<<"count of object createed is:"<<account::count;

return 0;

}
