//descending order
#include<iostream>
using namespace std;
int x[10001];
int y[10001];
void merge(int x[],int y[],int a[],int start,int end)
{
    int i=start;
    int mid=(start+end)/2;
    int j=mid+1;
    int k=start;
    while(i<=mid&&j<=end)
    {
        if(x[i]>y[j])    //change here for ascending/descending
        {
            a[k]=x[i];
            i++;
            k++;
        }
        else
        {
            a[k]=y[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        a[k]=x[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        a[k]=y[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int start,int end)
{
    if(start>=end)
        return;
        int mid=(start+end)/2;
    for(int i=start;i<=mid;i++)
    {
        x[i]=a[i];
    }
    for(int i=mid+1;i<=end;i++)
    {
        y[i]=a[i];
    }
    mergesort(x,start,mid);
    mergesort(y,mid+1,end);
    merge(x,y,a,start,end);
}

int main()
{
    int i,n,a[10001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    }
