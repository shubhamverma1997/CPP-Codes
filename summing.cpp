#include<iostream>
using namespace std;
int main()
{
    long long int index=0,n,m,i,num1=0,num2=0;
    cin>>m>>n;
    long long int a[m],b[n];
    for(i=0;i<m;i++)
        {
            cin>>a[i];
            num1=num1*10+a[i];
        }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        num2=num2*10+b[i];
    }
    num1=num1+num2;
    num2=num1;
    for(i=0;num1!=0;i++)
    {
        index++;
        num1=num1/10;
    }

    long long int c[index];
    for(i=0;i<index;i++)
    {
        c[i]=num2%10;
        num2=num2/10;
    }

    for(i=index-1;i>=0;i--)
    {
        cout<<c[i]<<" ";
    }
}
