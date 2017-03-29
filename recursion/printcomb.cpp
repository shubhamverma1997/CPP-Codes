#include<iostream>
using namespace std;
void print(int n,int count)
{
    if(n/10==0)
    {
        cout<<(char)(n+64);
        return;
    }
    int num=n,i,j,k;
    for( i=0;num!=0;i++)
        num=num/10;
    for(j=0;j<i;j++)
    {
        num=n;
        for(k=j;k<i;k++)
        {
            num=num/10;
            cout<<char(num+64);
        }
    }
    cout<<endl;
    print(n/10,count);


}
int main()
{
    int n;
    cin>>n;
    print(n,3);
}
