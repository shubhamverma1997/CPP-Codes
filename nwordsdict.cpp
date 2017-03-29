#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,j,flag,i;
    char a[20][100];
    cin>>n;
    cin.get();

    for(i=0;i<n;i++)
    {
        cin.getline(a[i],100);
    }




    flag=0;
    for(i=n;i>0;i--)
    {
        flag=0;
        for(j=1;j<i;j++)
        {
            if(strcmp(a[j],a[j-1])<0)
            {
                swap(a[j],a[j-1]);
                flag=1;
            }

        }
        if(flag==0)
                break;
       // for(int k=0;k<n;k++)
       // cout<<a[k]<<" ";
        //cout<<endl;
    }
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }


}
