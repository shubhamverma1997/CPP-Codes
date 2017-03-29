#include<iostream>
using namespace std;
class node{
    public:
    int num;
    node*next;
    node():next(NULL),num(NULL){}
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
            cout<<temp->num<<" ";
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
        while(temp!=NULL)
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
    void oddeven()
    {
        node*temp=head;
        node*odd=new node;
        node*even=new node;
        node*te=even;
        node*oe=odd;
        int eflag=0,oflag=0;
        //cout<<oe->num;
       // cout<<te->num;
        while(temp!=NULL)
        {
            if(temp->num%2==0)
            {
                eflag=1;
                if(temp==head)
                {
                    te->num=temp->num;
                }
                else
                    {
                        node*temp2=new node;
                        temp2->num=temp->num;
                        if(te==NULL)
                        {
                            te=temp2;
                        }
                        else
                        {
                        te->next=temp2;
                        te=temp2;
                        }
                    }
            }
            else
            {
                    oflag=1;
                if(temp==head)
                {
                    oe->num=temp->num;
                }
                else
                {
                    node*temp2=new node;
                    temp2->num=temp->num;
                    if(oe==NULL)
                    {
                        oe=temp2;
                    }
                    else
                    {
                    oe->next=temp2;
                    oe=temp2;
                    }
                }
            }
                        temp=temp->next;
        }
        if(head->num%2==0)
            odd=odd->next;
        else
        {
                even=even->next;
        }
        while(odd!=NULL&&oflag==1)
        {
            cout<<odd->num<<" ";
            odd=odd->next;
        }
        while(even!=NULL&&eflag==1)
        {
            cout<<even->num<<" ";
            even=even->next;
        }

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
        a.oddeven();
        cout<<endl;
        t--;
    }
}
