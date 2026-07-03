/*Write a program to implement a simple dictionary using an array of
structures, where the user can store a word and its meaning, and search
for a meaning by entering a word (simulate dictionary lookup)*/
#include<iostream>
#include<string>
using namespace std;
struct dic
{
   string word;
   string meaning;

};
int main()
{
    dic d[5];
    int i,found=0;
    string search;

    for(i=0;i<5;i++)
    {
        
    cout<<"enter the " <<i+1<<"word:";
    cin>>d[i].word;
    }
    cin.ignore();
    for(i=0;i<5;i++)
    {
      cout<<"enter the "<<i+1 <<"meaning:";
      getline(cin, d[i].meaning);
    }
    cout<<"Enter the word to search:";
    cin>>search;
    for(i=0;i<5;i++)
    {
    if(d[i].word==search)
    {
       cout<<"the meaning of word is:"<<d[i].meaning;
       found=1;
       break;
    }
    }
   if (!found)
     cout<<"Invalid word...";
    
}