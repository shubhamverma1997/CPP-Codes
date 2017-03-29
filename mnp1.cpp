#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    cout<<1<<endl;
        for(i=2;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i%2==0&&j!=1&&j!=i)
                    cout<<0;
                else
                    cout<<1;
            }
            cout<<endl;
        }
}
