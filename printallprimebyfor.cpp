#include<iostream>
using namespace std;
int main()
{
    int n,i=3,j=2,flag=1;
    cin>>n;
    cout<<2<<" ";
   for(i=3;i<=n;i++)
    {
        flag=1;j=2;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
               {
                flag=0;break;
               }
        }
        if(flag==1)
            cout<<i<<" ";
    }
}
