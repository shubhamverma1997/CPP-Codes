#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d):data(d),next(NULL){};

};
class stack
{
    public:
    node*top;
    stack():top(NULL){}
    void input()
    {
        int d;
        cin>>d;
        node*newnode=new node(d);
        newnode->next=top;
        top=newnode;
    }
    void output()
    {
        node*temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }
    }
};
int main()
{
    int n=4;
    stack s;
    while(n>0)
    {
    s.input();
    n--;
    }
    s.output();
}
