#include<iostream>
using namespace std;
int* fun(int n)
{
    int *a=new int[n];
    for(int i=0;i<n;i++)
    a[i]=i*i;
    return a;
}
int main()
{
    int n;
    cin>>n;
    int *ptr=fun(n);
    for(int i=0;i<n;i++)
    cout<<ptr[i];
    delete ptr;
}
