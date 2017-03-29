#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n>0)
    {
        if(n&1)   //bitwise and operator
            count++;
        n>>=1;  //rightshift operator
    }
    cout<<count;
}
