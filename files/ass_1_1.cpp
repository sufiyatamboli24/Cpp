/*Write a program to create a class 'Student' with data members such as
'name', 'rollNo', and 'marks'. Include methods to accept and display
student details using different access specifiers (private, public). Create
objects and demonstrate input-output operations.*/

#include<iostream>
using namespace std;
class student 
{
    private:
    int rollno;
    string name;
    float marks;

    public:
    void accept()
    {
        cout<<"Enter the roll number of student:";
        cout<<"\nEnter the Name of student:";
        cout<<"\nEnter the marks of student:";
        cin>>rollno>>name>>marks;
    }

    void display()
    {
        cout<<"\nRoll no of student is:"<<rollno;
        cout<<"\nname of student is:"<<name;
        cout<<"\nmarks of student is:"<<marks;
    }
};

int main()
{
    student obj;
    obj.accept();
    obj.display();

    return 0;
}

