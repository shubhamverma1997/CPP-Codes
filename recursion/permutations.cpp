#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permute(char input[],int start,vector<string> &v)
{
    //base case
    if(input[start]=='\0')
    {
        string s(input);
        v.push_back(s);
        return;
    }
    for(int i=start;input[i]!='\0';i++)
    {
        swap(input[start],input[i]);
        permute(input,start+1,v);
        //backtracking now
        swap(input[start],input[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        vector<string> v;
        char input[100];
        cin>>input;
        permute(input,0,v);
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
        n--;
    }
}
