#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
    Node(int head):data(d),next(NULL)
    {}
};

void insertAtEnd(int d,Node* &head,Node* &tail)
{
    if(head==NULL)
    {
        head=tail=new Node(d);
    }
    else
    {
        tail->next=new Node(d);
        tail=tail->next;
    }
}
void takeInput(Node* head)   //we are not passing it by reference so that head does not change.
{
    while(head!=NULL)
}
int main()
{

}
