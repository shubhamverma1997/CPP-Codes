#include<iostream>
using namespace std;
int main()
{
    int n,num,i,large;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
          large=a[i];
    }
    cout<<large <<" is the largest"<<endl;
}
