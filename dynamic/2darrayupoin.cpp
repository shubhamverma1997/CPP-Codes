#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *ptr=new int[n];
    int **ptr2=new int*[*ptr];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ptr2[i][j];
        }
    }
    delete[] ptr2;
    delete[] ptr;
}
