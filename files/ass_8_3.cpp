/*Write a program to overload the * operator to multiply two matrices
(2x2).*/
#include<iostream>
using namespace std;
class matrix
{
    int a[2][2],i,j;
    public:
    void get()
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    matrix operator *(matrix m)
    {
        matrix temp;
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                temp.a[i][j]=0;

                for(int k=0;k<2;k++)
                {
                    temp.a[i][j]+=a[i][k]*m.a[k][j];
                }
            }
        }
        return temp;
    }

    void put()
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
        
    }
};
int main()
{
    matrix m1,m2,m3;
    cout<<"\nenter the 1 array:";
    m1.get();
    cout<<"\nenter the 2 array:";
    m2.get();
    m3=m1*m2;
    m3.put();


    return 0;
}