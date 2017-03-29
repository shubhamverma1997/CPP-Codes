#include<iostream>
#include<cstring>
using namespace std;
int k=0,univ=1;
void checker(char a[],int n,int start)
{
    if(univ==0)
        return;
    if(start>=n||n==0)
        return;
    if(k==0&&a[start]=='a')
    {
        k=1;
        checker(a,n,start+1);
    }
    if(k==1&&a[start]=='\0')
        return;
    else if(k==1&&a[start]=='a')
        {
            k=1;
            checker(a,n,start+1);
        }
    else if(k==1&&a[start]=='b'&&a[start+1]=='b')
    {
        k=2;
        checker(a,n,start+2);
    }
    else if(k==2&&a[start]=='\0')
        return;
    else if(k==2&&a[start]=='a')
    {
        k=1;
        checker(a,n,start+1);
    }
    else
    {
        univ=0;
        return;
    }
}
int main()
{
    int t;
    char a[101];
    cin>>a;
    t=strlen(a);
    checker(a,t,0);
    if(k>0&&univ==1)
        cout<<"YES";
    else
        cout<<"NO";
}
