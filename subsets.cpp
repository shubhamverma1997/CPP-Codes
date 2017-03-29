#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int k,i=0;
vector<int> v;
void gass2(int input[],int start ,int output[],int index)
{
    int temp=0,count;
    if(input[start]==-20)
    {
        int a[100];
        for(int j=0;output[j]!=-20;j++)
            {
                a[j]=output[j];
                temp=temp+output[j];
            }
        if(temp==k)
            {
                int j;
                for(j=0;output[j]!=-20;j++)
                    v.push_back(output[j]);
                    v.push_back(-20);
            }
        return;
    }

    //recursive case-two options
    //case : 1
    output[index]=input[start];
    output[index+1]=-20;
    gass2(input,start+1,output,index+1);
    //case 2
    output[index]=-20;
    gass2(input,start+1,output,index);
}
int main()
{
    int n;
    cin>>n;
    int input[100];
    int output[100];

    for(i=0;i<n;i++)
        cin>>input[i];
    cin>>k;
    input[i]=-20;

    gass2(input,0,output,0);

    for(int j=v.size()-1;j>=0;j--)
    {
        if(v[j]!=-20)
            cout<<v[j]<<" ";
        else
            cout<<endl;
    }
}
