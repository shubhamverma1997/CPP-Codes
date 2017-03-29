#include<iostream>
using namespace std;
bool checksort(int a[],int n)
{
    if(n==0||n==1)
        return true;
    int chotaarray[100];
    for(int i=1;i<n;i++)
    {
        chotaarray[i-1]=a[i];
    }
    bool ischotaarraysorted=checksort(chotaarray,n-1);
    if(a[0]<a[1]&&ischotaarraysorted)
        {return true;}
    else {return false;}
}
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<checksort(a,n);
}
