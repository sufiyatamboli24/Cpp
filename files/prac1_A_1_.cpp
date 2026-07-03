#include<iostream>
using namespace std;
int main()
{
    int age,heart_rate,minutes_lived,result;
    cout<<"Enter your age:"<<"\n"<<"Enter your  heart rate:";
    cin>>age >>heart_rate;

    minutes_lived=age*365*24*60;
    cout<<"\nMinutes lived "<<minutes_lived;
    result=minutes_lived*heart_rate;

    cout<<"\nYou have approximately "<<result<<" heartbeats since you were born.....";

    return 0;
}
