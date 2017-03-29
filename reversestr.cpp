#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,t,i;
    cin>>n;
    fflush(stdin);
    char ar[1000000];
    while(n>0)
    {
        fflush(stdin);
        cin.getline(ar,1000000);
        t=strlen(ar);
        for(i=t-1;i>=0;i--)
            cout<<ar[i];

        n--;
    }
}
