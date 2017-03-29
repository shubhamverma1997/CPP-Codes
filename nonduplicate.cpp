#include<iostream>
using namespace std;
int main()
{
    long long int t,temp,n,i,j,flag;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        n=n*2+1;
        long long int a[n],num;
        cin>>a[0];
        num=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            num=a[i]^num;
        }
        cout<<num<<endl;
        t--;
    }
}
