#include<iostream>
using namespace std;
int fact(int n)
{
    int a;
    //base  case
    if(n==0)
        return 1;
    else   //recursive class
        a =n*fact(n-1);
    return a;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
