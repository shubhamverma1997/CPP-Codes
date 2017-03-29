#include<iostream>
using namespace std;
int main()
{
    long long int num,i,j,n;
    cin>>n;
    long long int count0=0,count1=0;
    for(i=0;i<n;i++)
        {
            cin>>num;
            if(num==0)
            count0++;
    else
        count1++;
    }
    for(i=count0;i>0;i--)
        cout<<0<<" ";
        for(i=count1;i>0;i--)
        cout<<1<<" ";
}
