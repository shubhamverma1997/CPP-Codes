#include<iostream>
using namespace std;
int main()
{
    int n,i,p,c,m;
    float avg;
    char name[20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>name;
        cin>>p>>c>>m;
        avg=(p+c+m)/3;
        cout<<name<<":"<<avg<<endl;
    }
}
