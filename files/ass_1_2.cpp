/* Write a program to create a class BankAccount with data members
accountNo, name, and balance. Include functions to deposit and withdraw
money. Demonstrate creation of objects and method calling.*/

#include<iostream>
using namespace std;
class banckaccount
{
   int accountno;
   string name;
   float balance;

   public:
   void get()
   {
      cout<<"Enter the account number:";
      cin>>accountno;
      cout<<"Enter the name:";
      cin>>name;
      cout<<"Enter the balance:";
      cin>>balance;

   }
   void deposit(int amount)
   {
    balance+=amount;
    cout<<"amount diposit...new balance:"<<balance<<"\n";
   }
   void withdraw(int amount)
   {
  if(amount > balance)
  {
   cout<<"Insufficient balance..withdraw failed.."<<balance<<"\n";

  }
  else{
   balance-=amount;
   cout<<"amount withdraw..new balance:"<<balance<<"\n";
  }
   }

   void display()
   {
      cout<<"......details......";
      cout<<"\nAccount number:"<<accountno;
      cout<<"\nName:"<<name;
      cout<<"\nBalance:"<<balance;
   }
};
int main()
{
   banckaccount obj;
   int am,amm;
   obj.get();
   cout<<"Enter the amount:";
   cin>>am;
   obj.deposit(am);
   cout<<"Enter the amount for withdraw:";
   cin>>amm;
   obj.withdraw(amm);
   obj.display();

   return 0;

}