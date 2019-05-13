#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    int i;
    cin>>str;
    strrev(str);
    for ( i=0; i<3; i++)
    {
        cout<<str[i];
    }
    return 0;
}
