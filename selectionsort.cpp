//in selection sort we take a number and compare
// it to all numbers until we find the smallest
// by swapping and when we get the smallest one
// we put it first among the rest
// complexity n^2
#include<iostream>
using namespace std;
int main()
{
    int j,i,n,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp,min_index;
    //selection sort
    for(i=0;i<n;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index-j;
            }
        }
        //swap
        temp=a[min_index];
        a[min_index]=a[i];
        a[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
