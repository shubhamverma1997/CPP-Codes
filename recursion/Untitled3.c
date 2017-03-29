#include<iostream>
using namespace std;
void func(int n,char from,char to,char aux)
{
    if(n==1)
    {
        cout<<"Moving ring 1 from A to C ";
        return;
    }
    func(n-1,tfrom,aux,to);
    cout<<"Moving ring "<<n-1<<" from "<<from<<" to "<<to;
    func(n-1,aux,to,from);
}
int main()
{
    int n;
    cin>>n;
    func(n,'A','B','C');
}
