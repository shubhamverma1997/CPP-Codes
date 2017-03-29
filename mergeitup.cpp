#include<iostream>
using namespace std;
int main()
{
    long long int m,j,n,i,count;
    cin>>m>>n;
    long long int a[m+n],b[n];
    for(i=0;i<m;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
        count=m+n-1;
    for(i=m-1,j=n-1;i>=0,j>=0;)
    {
        if(a[i]>=b[j]&&i>=0)
        {
            a[count]=a[i];
            count--;
            i--;
        }
        if(a[i]<b[j]&&j>=0)
        {
            a[count]=b[j];
            count--;
            j--;
        }

    }
    for(i=0;i<m+n;i++)
        cout<<a[i]<<" ";
}
