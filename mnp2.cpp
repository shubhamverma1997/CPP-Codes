#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count;
    cin>>n;
    cout<<1<<endl;
    if(n>=2)
    {
        for(i=2;i<=n;i++)
        {
            count=i;
            for(j=1;j<=i;j++)
            {
                if(j==1)
                    cout<<i-1;
                else if(j<i)
                    cout<<0;
                else
                    cout<<i-1;
            }
            cout<<endl;
        }
    }
}
