#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100],temp;
    int i,j;
    cin>>str;
    j=strlen(str)-1;
    for(i=0;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    for(i=0;i<strlen(str);i++)
    {
        cout<<str[i];
    }
    return 0;
}
