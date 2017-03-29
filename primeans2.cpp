
#include <iostream>
using namespace std;


int main() {
int t,a,b,i,flag,num,j;
    cin>>t;
        while(t>0)
    {
        cin>>a>>b;
            int arr[b];
            arr[0]=a;
            for(i=0;i<b;i++)
            {arr[i]=arr[i-1]+1;}
        num=b-a+1;
        for(j=2;j<=b;)
        {
            if(arr[j]==0)
            continue;
            for(i=0;i<b;i+=j)
        {

            if(arr[i]>=a)
            {num--;arr[i]=0;}
        }
            j++;
        }
        t--;
        cout<<num<<endl;
    }
    return 0;
}
