#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int flag, i,j,index;
    char a[100000],b[100000],temp;
    cin.getline(a,100000);
    cin.getline(b,100000);
   // cout<<a<<endl<<b<<endl;
long long int count=0,flag2=0;
int index2;
    for(i=0;a[i]!='\0';i++)
    {
        flag=1;
        if(a[i]==b[count])
           {
               index=i;
               flag2=1;

                for(j=i;b[count]!='\0';j++)
                {
                    if(a[j]!=b[count])
                    {
                        flag=0;break;
                    }
                    count++;
                }

           }
           index2=i;
           if(flag==0)
                    break;
    }
    if(b[0]=='\0'||a[0]=='\0')
        cout<<1;
    else if(flag==1&&flag2==1)
        cout<<index;
    else
        cout<<index2;
}

