#include<iostream>
using namespace std;

//this is not dynamic programming . it will be when we start saving answers of
//computations when they occur again and again

//no. of ways we can ascend n steps with options of taking 1,2 or 3 steps at a time

int stepways(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return stepways(n-1)+stepways(n-2)+stepways(n-3);
}

int main()
{
    int n;
    cin>>n;
    cout<<stepways(n);
}
