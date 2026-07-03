#include<iostream>
#include<string>
using namespace std;
class bank_account
{
    int accont_no,balance,amount;
    string depositor,type_acc;
    public:
    void get()
    {
    cout<<"Enter the name of depositor:";
    cin>>depositor;
    cout<<"\n"<<"Enter the type of the account:";
    cin>>type_acc;
    cout<<"\n"<<"Enter the accont number:";
    cin>>accont_no;
    cout<<"\n"<<"Enter the balance:";
    cin>>balance;

    cout<<"Enter the amount:"<<endl;
    cin>>amount;
    }


    void withdraw()
    {
        if(amount > balance)
        {
          cout<<"Insufficient balance! withdraw failed.........."<<endl;
        }
        else{
            balance -= amount;
            cout<<"Amount withdraw succefully .......current balance:"<< balance<<endl;
        }
    }

    void display()
    {
        cout<<"Account Holder:"<<depositor<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};

int main()
{
    bank_account obj;
    obj.get();
    obj.withdraw();
    obj.display();

    return 0;
}