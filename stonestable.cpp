#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    char a[n],ch;
    for(i=0;i<n;i++)
    {
        if(i==0)
        cin>>a[i];
        else
        {
            cin>>a[i];
            if(a[i]==a[i-1])
                count++;
        }
    }
    cout<<count;
}
