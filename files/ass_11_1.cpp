/* Write a program to implement a simple hash table using an array of
size 10 to store roll numbers and marks. Allow the user to insert and
search for a student’s marks using roll number.*/
#include<iostream>
using namespace std;
int main()
{
    int i,ro[10],mr[10];
    for(i=0;i<10;i++)
    {
      ro[i]=-1;
      mr[i]=0;
    }
    
    int choice;
    do
    {
        int key,r,m,i;
       cout<<"\n1.insert:"<<"\n2.search"<<"\nexit";
       cout<<"\nenter the choice:";
       cin>>choice;
      
       if(choice == 1)
    {
        cout<<"\nenter the roll number:";
        cin>>r;
        cout<<"\nenter the marks:";
        cin>>m;
        key=r%10;
        ro[key]=r;
        mr[key]=m;
    }

    if(choice==2)
    {
        int key,search;
        cout<<"\nenter the number to search:";
        cin>>search;
        key=r%10;
        if(ro[key]==search)
        {
            cout<<"\nthe marks of student is:"<<mr[key];
        }
        else{
            cout<<"roll no. not there..";
        }
    }
    } while(choice !=3);

    return 0;
}