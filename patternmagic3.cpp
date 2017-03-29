#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<" ";
    }
    cout<<"*"<<endl;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(i+j==n+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<" ";
        for(j=n+2;j<=2*n+1;j++)
        {
            if(j-i==n+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(j-i==1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<" ";
        for(j=n+2;j<=2*n+1;j++)
        {
            if(j+i==2*n+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        cout<<" ";
    }
    cout<<"*";

}
