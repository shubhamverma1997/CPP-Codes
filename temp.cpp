#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,ini,fin;
    float cel;
    cin>>ini;
    cin>>fin;
    cin>>n;
    for(i=0;i<fin;i=i+n)
    {
        cel=(5/9.0)*(i-32);
        cout<<i<<" "<<cel<<endl;
    }
}
