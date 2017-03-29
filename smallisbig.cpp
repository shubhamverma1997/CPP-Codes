#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int i,t;
    char ch;
    for(i=0;;i++)
    {
       ch=cin.get();
        if(ch>=65&&ch<=90)
            ch=ch+32;

        else if(ch=='\n')
            break;
        cout<<ch;

    }
}
