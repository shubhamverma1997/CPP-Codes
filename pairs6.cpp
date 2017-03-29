#include<iostream>
using namespace std;
int main()
{

            long long int temp;




    long long int n,i,j,x;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;

     for(i=n;i>0;i--)     //bubble sort
    {
        for(j=1;j<i;j++)
        {
            if(a[j]>a[j-1])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
     }


    for(i=0;i<n-1;i++)
    {
        if(x<a[i])
        continue;
        else
        {
            for(j=i+1;j<n;j++)
                if(a[i]+a[j]==x)
                {
                    if(a[i]<a[j])
                    cout<<"("<<a[i]<<","<<a[j]<<") ";
                else
                    cout<<"("<<a[j]<<","<<a[i]<<") ";
                }
          }
     }
}
