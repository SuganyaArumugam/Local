#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str("hello world");
    string str1("world");
    str.replace(str.find(str1),str1.length(),"suchi");
    cout<<str;
    return 0;
}
