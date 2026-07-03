#include<iostream>
using namespace std;
class incr
{
    int a;
    public:
    incr(int x)
    {
        a=x;
        cout<<"\n\tThe value before overloading is "<<a;
    }
    void operator++()
    {
        a=a-5;
        cout<<"\n\tThe value after overloading is "<<a;
    }
};
int main()
{
    incr obj(50);
    ++obj;

    return 0;
}