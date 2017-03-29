#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,two=0,five=0,temp;
    cin>>t;
    while(t>0)
    {
        two=0;
        five=0;
        cin>>n;
        for(i=1;i<=n;i++)
            {
                temp=i;
                while(temp%2==0)
                    {
                        two++;
                        temp=temp/2;
                    }
                temp=i;
                while(temp%5==0)
                    {
                        five++;
                        temp=temp/5;
                    }
            }
        if(two==five)
            cout<<two<<endl;
        else
        {
            if(two>five)
            cout<<five<<endl;
            else
            cout<<two<<endl;
        }t--;
    }
}
