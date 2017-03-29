#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
    int x,y,i,j;
    cin>>x>>y;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=0;j<y;j++)
    {
        if(j%2==0)
        for(i=0;i<x;i++)
        {
                cout<<a[i][j];
        }
        else
        for(i=x-1;i>=0;i--)
        {
                cout<<a[i][j];
        }

    }

}
