#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int gass(char input[],int start,char output[][100])
{
    //base case
    if(input[start]=='\0')
    {
        output[0][0]='\0';
        return 1; //no. of subsequences
    }
    //recursive case
    //make one more copy
    int smalleroutputsize=gass(input,start+1,output),j;
    for(int i=0;i<smalleroutputsize;i++)
    {
        output[smalleroutputsize+i][0]=input[start];
        for(j=0;output[i][j]!='\0';j++)
        {
            output[smalleroutputsize+i][j+1]=output[i][j];
        }
        output[smalleroutputsize][j+1]='\0';
    }
    return 2*smalleroutputsize;
}
void gass2(char input[],int start ,char output[],int index, vector<string> &v)
{
    if(input[start]=='\0')
    {
        string s(output);
        v.push_back(s);
        return;
    }
    //recursive case-two options
    //case : 1
    output[index]=input[start];
    output[index+1]='\0';
    gass2(input,start+1,output,index+1,v);
    //case 2
    output[index]='\0';
    gass2(input,start+1,output,index,v);
}
int main()
{
    int n;
    cin>>n;

    while(n>0)
    {
    char input[100];
    char output[100];
    vector<string> v;
    cin>>input;
    gass2(input,0,output,0,v);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    n--;
    }
}
