#include<iostream>
using namespace std;
int main()
{
    int n,num,i,flag=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
            {cout<<num<<" found at i= "<<i<<endl;flag=1;}
    }
    if(flag==0)
        cout<<num<<" not found"<<endl;
}
