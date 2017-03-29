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

};

node*merge(node*head1,node*head2)
{
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    node*newhead=new node;
    if(head1->num>head2->num)
    {
        newhead=head2;
        newhead->next=merge(head1,head2->next);
    }
    else
    {
        newhead=head1;
        newhead->next=merge(head1->next,head2);
    }
    return newhead;
}
int main()
{
    int t,n,num,m;
    cin>>t;
    while(t>0)
    {
        linkedlist a,b;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            a.input(num);
        }
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>num;
            b.input(num);
        }
        node* c=merge(a.head,b.head);
        node*temp=c;
        while(temp!=NULL)
        {
            cout<<temp->num<<" ";
            temp=temp->next;
        }

        cout<<endl;
        t--;
    }
}
