// 0,1,1,2,3,5,8.....
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int a;
    a=fibonacci(n-1)+fibonacci(n-2);
    return a;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
}
