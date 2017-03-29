#include<iostream>
using namespace std;
int main()
{
    long long int t,flag,n,m,i,j,num,temp;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        m=2*n+1;
        long long int a[m];
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
         flag=0;
    for(i=m;i>0;i--)
    {
        flag=0;
        for(j=1;j<i;j++)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
                flag=1;
            }

        }
        if(flag==0)
                break;
    }
        for(i=0;i<m-1;i++)
        {
            if(a[i]!=a[i+1])
            {cout<<a[i]<<endl;break;}
        }


        t--;
    }
}
