#include<iostream>
using namespace std;
int main()
{
    int i,j,k,count=5;
    cout<<"*********"<<endl;
    for(i=1;i<=4;i++)
    {
        count=5-i;
        for(j=1;j<=4;j++)
        {
            if(count>0)
            {
                cout<<"*";
                count--;
            }
            else cout<<" ";
        }
        count=i;
        for(j=1;j<=5;j++)
        {
            if(count>0)
            {
                cout<<" ";
                count--;
            }
            else
                cout<<"*";
        }

        cout<<endl;
    }
    for(i=5;i<=7;i++)
    {
        count=i-3;
        for(j=1;j<=4;j++)
        {
            if(count>0)
            {
                cout<<"*";
                count--;
            }
            else cout<<" ";
        }
        count=8-i;k=0;
        for(j=1;j<=5;j++)
        {
            if(count>0)
           {
               cout<<" ";
               count--;
           }
           else
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"*********";
}
