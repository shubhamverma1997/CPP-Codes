#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int t,n,i,j;
    char a[1000000];
    cin>>n;
    fflush(stdin);
    while(n>0)
    {
        cin.getline(a,1000000);
        t=strlen(a);
        for(i=t-1;i>=0;i--)
        {
            if(a[i]==32)
            {
                for(j=i+1;j<t;j++)
                {
                    if(a[j]!=32)
                    cout<<a[j];
                    else break;
                }
                cout<<" ";
            }
            if(i==0)
            {
                for(j=i;j<t;j++)
                {
                    if(a[j]!=32)
                    cout<<a[j];
                    else break;
                }
                cout<<" ";
            }
        }
        cout<<endl;
        n--;
    }
}
