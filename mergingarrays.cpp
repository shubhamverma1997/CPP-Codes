#include<iostream>
using namespace std;
void arraymerge(int x[],int a,int y[],int b,int c[])
{
    int i,j,k,count;

    for(i=0;i<a;i++)
    {
        c[i]=x[i];
    }
    count=a+b-1;
    for(i=a-1,k=b-1;i>0,k>0;)
    {
        if(x[i]>y[k]||(k==0&&i!=0))
        {
            c[count]=x[i];count--;i--;
        }
        else if(x[i]<y[k]||(i==0&&k!=0))
        {
            c[count]=y[k];count--;k--;
        }
    }
}
int main()
{
    int q[5],w[5],e[10],i;
    arraymerge(q,5,w,5,e);
    for(i=0;i<5;i++)
    cin>>q[i];
    for(i=0;i<5;i++)
    cin>>w[i];
    for(i=0;i<10;i++)
        cout<<e[i];
}
