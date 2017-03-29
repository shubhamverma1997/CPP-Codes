#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1,num,sum=0;
    cin>>n;
    for(i=1;n>=count;i++)
    {
        num=3*i+2;
        if(num%4!=0)
        {
            cout<<num<<endl;
            sum=sum+num;
            count++;
        }
    }
    cout<<sum;
}
