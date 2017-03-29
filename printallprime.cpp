#include<iostream>
using namespace std;
int main()
{
    int n,l,i=3,j=2,flag=1;
    int t;
    cin>>t;
    while(t>0)
    {
    	cin>>l;
	cin>>n;
	i=l;
	if(l<=2)
    cout<<2<<" ";
    while(i<=n)
    {
        flag=1;j=2;
        while(j<i)
        {
            if(i%j==0)
               {
                flag=0;break;
               }
            else
                j++;
        }
        if(flag==1)
            cout<<i<<" ";
            i++;
            
    }
	t--;
	}
}
