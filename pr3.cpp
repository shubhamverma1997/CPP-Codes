#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    char ar[1000000],temp;
    long long int i,n,t,x;
    cin>>n;
    fflush(stdin);
    while(n>0)
    {
        cin>>x;
        fflush(stdin);
        cin.getline(ar,1000000);
        t=strlen(ar);
        for(i=0;x>0;i++)
        {
            temp=ar[i];
            ar[i]=ar[t-x];
            ar[t-x]=temp;
            x--;
        }
        cout<<ar<<endl;
        n--;
    }
}
