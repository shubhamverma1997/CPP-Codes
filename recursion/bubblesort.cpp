//here we keep breaking the array at last sorted element and take others further
//for sorting
#include<iostream>
using namespace std;
int bubblesort(int a[],int n)
{
    int i;
    //base case
    if(n==0||n==1)
        return 0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
    }
    bubblesort(a,n-1);
}
int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(bubblesort(a,n)==0);
    for(i=0;i<n;i++)
        cout<<a[i];
}
