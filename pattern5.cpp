#include<iostream>
using namespace std;
int main()
{
    int n,i,j,alpha;
    cin>>n;
    for(i=0;i<n;i++)
    {
        alpha=65;
        for(j=n-i;j>0;j--)
        {
            cout<<char(alpha);
            alpha++;
        }
        alpha--;
        for(j=n-i;j>0;j--)
        {
            cout<<char(alpha);
            alpha--;
        }
        cout<<endl;
    }
}
