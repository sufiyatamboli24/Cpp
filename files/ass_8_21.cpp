/*Write a program to overload the == operator to compare two strings
(class objects) and check if they are equal.*/
#include<iostream>
#include<string>
using namespace std;
class compare 
{
    string str;
    public:
    void get()
    {
        cout<<"\nEnter the string:";
        cin>>str;
    }
    void put()
    {
        cout<<str;
    }
    bool operator==(compare c)
    {
        return (str==c.str);
    }

};
int main()
{
    compare s1,s2;
    s1.get();
    s2.get();
    if(s1==s2)
    {
        cout<<"equal...";
    }
    else{
        cout<<"Not equal....";
    }

    return 0;
}
