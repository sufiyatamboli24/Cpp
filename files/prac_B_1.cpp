#include<iostream>
#include<string.h>
#include<ctype.h>
int occurrences(char*str)
{
    int count=0,lent,n,i;
    n=strlen(str);
    for(i=0;i<n-1;i++)
    {
        if(isalpha(str[i]) && isalpha(str[i+1]));
        count++;
    }
    return count;
    
}
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    int result=occurrences(str);
    printf("the pair of sting is:%d",result);
    
    return 0;

}