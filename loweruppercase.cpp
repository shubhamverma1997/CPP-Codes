#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>=65&&c<=90)
    cout<<"UPPERCASE";
    else if(c>=97&&c<=122)
    cout<<"lowercase";
    else
    cout<<"Invalid";
}
