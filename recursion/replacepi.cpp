#include<iostream>
#include<cstring>
using namespace std;
void replace(char a[],int n)
{
    int count=1,i;
    if(a[0]=='\0');
        else
        {
            char arr[1010];
            if(a[0]=='3'&&a[1]=='.'&&a[2]=='1'&&a[3]=='4')
            {
                cout<<"pi";count=4;
            }
            else
                cout<<a[0];
                for(i=count;i<n;i++)
                {
                    arr[i-count]=a[i];
                }

                if(n-count>=0)
                {
                    arr[i-count]='\0';
                    replace(arr,n-count);
                }
        }
}
int main()
{
    char a[1001];int n,t;
    cin>>n;
        cin.get();
    while(n>0)
          {
            cin.getline(a,1001);
            t=strlen(a);
            replace(a,t);
            cout<<endl;
           // cin.get();

            n--;
          }
}
