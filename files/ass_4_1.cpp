/* Write a program to create a class 'Book' with a constructor to initialize
book details (title, author, price) and a destructor to display a message
when the object is destroyed.*/
#include<iostream>
using namespace std;
class book{
    string title,author;
    int price;
    public:
    book(string t,string a,int p)
    {
        title=t;
        author=a;
        price=p;
    }
  void  display()
  {
    cout<<"Title:"<<title;
    cout<<"author"<<author;
    cout<<"Price"<<price;
  }
~book()
{
    cout<<"\nThe object of the book is been distroyed..";
}
};
int main()
{
    int price;
    string author,title;
    cout<<"\nEnter the title:";
    cin>>title;
    cout<<"\nEnter the author:";
    cin>>author;
    cout<<"\nEnter the price:";
    cin>>price;

 book mybook(title,author,price);
 mybook.display();
   
return 0;
}
