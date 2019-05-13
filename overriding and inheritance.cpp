#include<iostream>
using namespace std;

/*
int mark(int);
int mark(float);

int main()
{
    int a=50;
    float b=30.3;
    mark(a);
    mark(b);
    return 0;
}
int mark(int c)
{
    cout << c;
}
int mark(float d)
{
    cout << d;
}
*/

 class mark
 {
 public:
    int m1,m2;
    int display()
    {
        cin>>m1>>m2;
    }
 };
 class student:public mark
 {
public:
    int result()
    {
        cout<<"sum="<<m1+m2;
    }
 };
 int main()
 {
     student a;
     a.display();
     a.result();
     return 0;
 }
