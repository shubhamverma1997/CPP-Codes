#include<iostream>
using namespace std;
int main()
{
    long int n,carno,i,o=0,e=0,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        o=0;
        e=0;
        cin>>carno;
        while(carno>0)
        {
            temp=carno%10;
            if(temp%2==0)
                e=e+temp;
            else
                o=o+temp;
            carno=carno/10;
        }
        if(e%4==0||o%3==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
