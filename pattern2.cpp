#include<iostream>
using namespace std;
int main()
{
    int n,i=1,j=1,num,flag=1;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        num=i;
        j=1;
        flag=1;
        while(j<=2*i-1)
        {
            cout<<num;
            if(num>=2*i-1)
              flag=0;
            if(flag==1)
                num++;
            else
                num--;
            j++;
        }
        cout<<endl;
        i++;
}    }
