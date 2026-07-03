#include<iostream>
using namespace std;
int main()
{
    enum color {red,yellow,green};

    //size of fundamental types........
    cout<<"size of int:"<< sizeof(int)<<" bytes"<<endl;
    cout<<"size of float:"<< sizeof(float)<<" bytes"<<endl;
    cout<<"size of char:"<< sizeof(char)<<" bytes"<<endl;

    //size of pointers........
    cout<<"size of int pointer:"<< sizeof(int*)<<" bytes"<<endl;
    cout<<"size of float pointer:"<< sizeof(float*)<<" bytes"<<endl;
    cout<<"size of char pointer:"<< sizeof(char*)<<" bytes"<<endl;

    //size of enumuration.......
    cout<<"size of enumuration:"<< sizeof(color)<<" bytes"<<endl;

    return 0;

}