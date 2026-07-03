/*Write a program to create a class Car with a constructor to initialize
model, brand, and price, and a destructor to display a message when the
object is deleted.*/
#include<iostream>
using namespace std;
class car
{
    public:
    string model,brand;
    int price;
    
    car(string b,string m,int p)
    { 
        brand=b;
        model=m;
        price=p;
    }
    void dispaly()
    {
        cout<<"....DETAILS OF CAR....";
        cout<<"\nBrand:"<<brand;
        cout<<"\nMode:"<<model;
        cout<<"\nPrice:"<<price;
    }
~car()
{
    cout<<"\nthe car object is been destroyed";
}
};
int main()
{
    string brand,model;
    int price;
    cout<<"\nEnter the name of brand:";
    cin>>brand;
    cout<<"\nEnter the name of model:";
    cin>>model;
    cout<<"\nEnter the number of price:";
    cin>>price;

    car mycar(brand,model,price);
    mycar.dispaly();

return 0;
}