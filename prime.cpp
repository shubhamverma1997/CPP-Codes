#include<iostream>
using namespace std;
int main()
{
    int n,i=2,flag=1;
    cin>>n;
    while(i<=n/2)
    {
    if(n%i==0)
    {
        flag=0;
        break;
    }
    i++;
    }
    if(flag==1)
    cout<<"Prime";
    else
    cout<<"Not Prime";
}
