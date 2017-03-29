#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int a,b,c;
    float root;
    cin>>a>>b>>c;
    if(b*b-4*a*c==0)
    {
        cout<<"Real and Equal"<<endl;
        cout<<(-b)/(2*a)<<" "<<(-b)/(2*a);
    }
    if(b*b-4*a*c!=0)
    {
        if(b*b>4*a*c)
        {
        cout<<"Real and Distinct"<<endl;
        root=sqrt(b*b-4*a*c);
        cout<<(-b-root)/(2.0*a)<<" "<<(-b+root)/(2.0*a);
        }
        else
        {
            cout<<"Imaginary"<<endl;
        }
    }
}
