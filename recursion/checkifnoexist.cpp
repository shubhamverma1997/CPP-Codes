//here the no is 7 which can obviously be changed
#include<iostream>
using namespace std;
bool checkno(int a[],int n)
{
    //base case
    if(n==0)
        return false;
    //recursive case
    int arr[100];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=a[i];
    }
    if(a[0]==7||checkno(arr,n-1))
        return true;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<checkno(a,n);
}
