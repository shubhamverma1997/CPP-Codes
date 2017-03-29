#include<iostream>
using namespace std;
int  main()
{
    long long int k,p,q,n=0,i,j,temp,temp2=0,flag=0;
    char ch[12];
    cin>>p>>q;
    for(k=p;k<=q;k++)
    {
        temp=k*k;
        j=0;n=0;temp2=0;
        while(temp>0)
        {
            n++;
            ch[j]=temp%10+48;
            temp=temp/10;
            j++;
        }
        ch[j]='\0';
        n=n/2;
        temp=0;
        temp2=0;
        for(i=j-1;i>=0;i--)
        {
            if(n>0)
            {
            temp=temp*10+ch[i]-48;
            n--;
            }
            else
            {
                temp2=temp2*10+ch[i]-48;
            }
        }
        //cout<<temp<<" "<<temp2<<"!";
        if(temp2+temp==k)
            cout<<k<<" ";
    }
}
