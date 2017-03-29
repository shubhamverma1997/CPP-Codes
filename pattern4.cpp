#include<iostream>
using namespace std;
int main()
{
    int i,j,flag=1,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            flag=0;
        else
            flag=1;
        for(j=1;j<=i;j++)
            {
                cout<<flag;
        flag=1-flag;
            }
        cout<<endl;
    }
}
