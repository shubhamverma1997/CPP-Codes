#include<iostream>
using namespace std;
class node{
    public:
    int num;
    node*next;
    node():next(NULL){}
    node(int n):num(n),next(NULL){}
};
class linkedlist{
    public:
    node*head;
    node*tail;

    linkedlist():head(NULL),tail(NULL){}
    void input(int n)
    {
        if(head==NULL)
        {
            node*temp=new node(n);
            head=temp;
            tail=temp;
        }
        else
        {
            node*temp=new node(n);
            tail->next=temp;
            tail=temp;

        }
    }
    void print()
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->num<<"->";
            temp=temp->next;
        }
    }
    void deldup()
    {
        node*temp=head;
        while(temp!=NULL)
        {
            int flag=0;
            node*temp2=temp->next;
            while(flag==0&&temp2!=NULL&&temp2->num!=-20)
            {
                if(temp->num==temp2->num)
                {
                    flag=1;
                    temp2->num=-20;
                }
                temp2=temp2->next;
            }
            if(temp->num!=-20)
                cout<<temp->num<<" ";
            temp=temp->next;
        }
    }
    void midpoint()
    {
        node*fast=head;
        node*slow=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL&&fast->next!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        cout<<slow->num<<endl;
    }
    void palindrome()
    {
        node*newnode=new node;
        node*temp=head;
        while(temp!=NULL)
        {
            if(temp==head)
            {
                newnode->num=temp->num;
            }
            else
            {
                node*element=new node;
                element->num=temp->num;
                element->next=newnode;
                newnode=element;
            }
            temp=temp->next;
        }
        temp=head;
        int flag=1;
        node*reversent=newnode;
        while(newnode!=NULL)
        {
            if(temp->num!=newnode->num)
            {
                flag=0;
                break;
            }
            temp=temp->next;
            newnode=newnode->next;
        }


        if(flag==0)
            cout<<0;
        else
            cout<<1;
    }
};
int main()
{
    int t,n,num;
    cin>>t;
    while(t>0)
    {
        linkedlist a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            a.input(num);
        }
        a.palindrome();

        cout<<endl;
        t--;
    }
}
