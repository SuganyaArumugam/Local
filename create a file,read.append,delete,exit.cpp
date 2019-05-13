#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int f_name;
    cin>>f_name;
    ofstream file;
    file.open("f_name.txt");
    file<< "my name is suganya from chennai.";
    file.close();
    return 0;
}
