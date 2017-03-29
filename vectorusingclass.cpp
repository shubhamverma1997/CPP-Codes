#include<iostream>
using namespace std;
class  vector
{
    private:
    int index;
    int currentmax;
    int *arr;

    public:
    vector()
    {
        index=0;
        currentmax=9;
        arr=new int[currentmax];
    }
    vector(int size)
    {
        currentmax=size;
        arr=new int[currentmax];
    }
    int getlast()
    {
       return arr[index];
    }
    void pushback(int n)
    {

        if(index==currentmax-1)
        {
            int in=index;
            int temp[index+1];
            for(int i=0;i<=index;i++)
                {
                temp[i]=arr[i];
                }
            currentmax=2*currentmax;
            delete [] arr;
            arr=new int[currentmax];
            int i;
            for(i=0;i<=index;i++)
            {
                arr[i]=temp[i];
            }
            arr[in]=n;
            index++;
        }
        else
        {
            arr[index]=n;
            index=index+1;
        }
    }
    void print()
    {
        for(int i=0;i<index;i++)
            cout<<arr[i]<<endl;
    }
    void popback()
    {
        index=index-1;
        if(index==(currentmax+1)/4)
            currentmax=(currentmax+1)/2;
    }
    void reserve(int n)
    {
        currentmax=n+1;
    }

};
int main()
{
vector a;
int n;
cin>>n;
for(int i=0;i<n;i++)
    a.pushback(i);
//a.print();
//a.popback();
//a.print();
for(int i=0;i<n;i++)
    a.pushback(i);
    a.print();
}
