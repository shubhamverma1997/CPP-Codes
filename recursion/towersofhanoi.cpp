#include<iostream>
using namespace std;
void func(int n,char from,char to,char aux)
{
    if(n==1)
    {
        cout<<"Moving ring 1 from "<<from<<" to "<<to<<endl;
        return;
    }
    else{
    func(n-1,from,aux,to);
    cout<<"Moving ring "<<n<<" from "<<from<<" to "<<to<<endl;
    func(n-1,aux,to,from);
    }
}
int main()
{
    int n;
    cin>>n;
    func(n,'A','C','B');
}
