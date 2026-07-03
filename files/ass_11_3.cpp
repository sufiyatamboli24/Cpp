/*Write a program to simulate a dictionary using arrays: store 5 English
words with their meanings, and allow the user to search for the meaning
of a word by entering it.*/
 #include<iostream>
 #include<string.h>
 using namespace std;
int main()
{
    string word[5]={"apple","book","dog","cat","lion"};
    string meaning[5]={"it is friut which red or in green color","its is collection or set of pages","dog is a pet","cat is also a pet","lion is known for the king of animal"};
    string search_meaning;
    int i,found=0;
    cout<<"Eneter the word to search: ";
    cin>> search_meaning;
    for(i=0;i<5;i++)
    {
        if(search_meaning==word[i])
        {
            cout<<"The meaning of word is\n:"<<meaning[i]<<endl;
            found=1;
            break;
        }
    }
    if(!found)
    {
        cout<<"Sorry..the word is not valid..";
    }
    return 0;

}


