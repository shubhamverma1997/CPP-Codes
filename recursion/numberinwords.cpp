//base call
//recursive call
#include<iostream>
using namespace std;
void niw(int n,int l)
{
    if(l==0);

        if(l!=0)
        {
            niw(n/10,l-1);
        switch(n%10)
    {
        case 1:cout<<"one"; break;
        case 2:cout<<"two"; break;
        case 3:cout<<"three"; break;
        case 4:cout<<"four"; break;
        case 5:cout<<"five"; break;
        case 6:cout<<"six"; break;
        case 7:cout<<"seven"; break;
        case 8:cout<<"eight"; break;
        case 9:cout<<"nine"; break;
        case 0:cout<<"zero";break;
    }
        cout<<" ";
        }

}
int main()
{
    int n,l=1,i,k;
    cin>>n;
    k=n;
    for(i=0;;i++)
    {
        if(n/10==0)
            break;
        else{n=n/10;l++;}
    }
    niw(k,l);
}
