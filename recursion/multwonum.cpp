//multiplying two numbers
#include<iostream>
using namespace std;
int mul(int x,int y)
{
    if(y==1)        //base case
        return x;
    int mult=x+mul(x,y-1); //recursive case
    return mult;
}
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    cout<<mul(x,y);
}
