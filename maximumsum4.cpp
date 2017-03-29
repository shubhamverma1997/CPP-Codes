#include<iostream>
using namespace std;
int main()
{
    long long int a[100001],t,i,n,j,sum,sum2,sum3;
    cin>>t;
    while(t>0)
    {
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum=a[0];sum2=a[0];sum3=a[0];
    for(i=0;i<n;i++)
    {
        sum3=a[i];
        sum=0;
        for(j=i;j<n;j++)
        {
                sum=sum+a[j];
                if(sum>sum3)
                    sum3=sum;
        }
        if(i==0)
            sum2=sum3;
        if(sum2<sum3)
        sum2=sum3;

    }
    cout<<sum2<<endl;
    t--;
    }
}
