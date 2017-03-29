#include<iostream>
using namespace std;
int main()
{
        int n,p,i,k,j;
        float sqrt,num,mul=1;
        cin>>n>>p;
        for(i=0;i*i<=n;i++)
        {
            if(i*i<=n)
                continue;
        }
        sqrt=i-1;
        cout<<sqrt<<endl;
        for(i=1;i<=p;i++)
        {
            mul=1;
            for(k=1;k<=i;k++)
                mul=mul*10;
            for(j=0;sqrt*sqrt<=n;j++)
            {
                sqrt=sqrt+(1/mul);
            }
            sqrt=sqrt-(1/mul);
        }
        cout<<sqrt;


}
