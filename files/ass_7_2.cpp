/*Write a program to demonstrate function overloading by creating
multiple functions named volume(), to calculate volume of a cube, a
cylinder, and a rectangular box.*/

#include<iostream>
#define PI 3.14
using namespace std;
class demo
{
    public:
   double volume(double side)
   {
    return side*side*side;
   }
   double volume(double radius ,double highet)
   {
     return PI*radius*radius*highet;
   }
   double volume(double length,double width,double hight)
   {
    return length *width*hight;
   }

};
int main()
{
    demo vol;
    double c=3.0,r=2.0,h=4.0,l=6.0,w=2.1;
    cout<<"\nvolume of cube:"<<vol.volume(c);
    cout<<"\nvolume of sylender:"<<vol.volume(r,h);
    cout<<"\nvolume of rectangle:"<<vol.volume(l,w,h);

return 0;
}