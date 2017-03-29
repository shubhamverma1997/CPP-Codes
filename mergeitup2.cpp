#include<iostream>
using namespace std;
int main()
{
    long long int flag,m,j,n,i,count;
    cin>>m>>n;
    long long int a[m+n],b[n];
    for(i=0;i<m;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
        count=m+n-1;
    for(i=m-1,j=n-1;i>=0,j>=0;)
    {
        if(a[i]>=b[j])
        {
            a[count]=a[i];
            count--;
            i--;
        }
        if(a[i]<b[j])
        {
            a[count]=b[j];
            count--;
            j--;
        }
        if(i==0)
        {
            flag=0;break;
        }
        if(j==0)
        {
            flag=1;break;
        }

    }
    long long int k;
    if(flag==0)
    {
        for(k=count;i>=0;k--)
        {
            a[count]=a[i];
            i--;
        }
    }
    else
    {
        for(k=count;j>=0;k--)
        {
            a[count]=b[j];
            j--;
        }
    }
    for(i=0;i<m+n;i++)
        cout<<a[i]<<" ";
}
