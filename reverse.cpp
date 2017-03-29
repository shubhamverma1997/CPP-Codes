#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long int n,i,bin,temp,dec=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>bin;
        while(bin>0)
        {
        temp=bin%10;
        //if(temp!=0)
        //dec=dec*10+temp;
        cout<<temp;
        bin=bin/10;
        }
        cout<<endl;
        dec=0;
    }
}
