#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class BinaryTreeNode
{
    public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;
    BinaryTreeNode(T d):data(d),left(NULL),right(NULL){}
};
template <typename T>
BinaryTreeNode<T> * takeInput()   //level order input
{
    int data;
    queue<BinaryTreeNode<T> *> q;
    cout<<"enter the data for root node";
    cin>>data;
    BinaryTreeNode<T> *root=new BinaryTreeNode<T>(data);
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<T> *front=q.front();
        q.pop();
        cout<<"Enter the children of "<<front->data<<" node";
        int leftdata,rightdata;
        cin>>leftdata>>rightdata;
        if(leftdata!=-1)
        {
            front->left=new BinaryTreeNode<T>(leftdata);
            q.push(front->left);
        }
        if(rightdata!=-1)
        {
            front->right=new BinaryTreeNode<T>(rightdata);
            q.push(front->right);
        }
    }
    return root;
}

//in this we push all the nodes in the queue of node pointer
//then we place a marker (NULL here) to identify that one level has ended
void levelorderprint(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        BinaryTreeNode<int> *f=q.front();
     if(f==NULL)
    {
        cout<<endl;
        q.pop();
        if(!q.empty())
        q.push(NULL);
    }
    else
    {
        q.pop();
        cout<<f->data;
        if(f->left!=NULL)
        {
            q.push(f->left);
        }
        if(f->right!=NULL)
        {
            q.push(f->right);
        }
    }
    }
}
BinaryTreeNode<int> *find(BinaryTreeNode<int> *root,int key)
{
    if(root==NULL)
        return NULL;
    if(root->data==key)
        return root;
    BinaryTreeNode<int> *found1=find(root->left,key);
    if(found1!=NULL)
        return found1;
    BinaryTreeNode<int> *found2=find(root->right,key);
    return found2;
}
int count(BinaryTreeNode<int>*root)
{
    if(root==NULL)
        return 0;
    //Recursive case
    return 1+count(root->left)+count(root->right);
}

int height(BinaryTreeNode<int>*root)
{
    if(root=NULL)
        return 0;
    int h1=height(root->left);
    int h2=height(root->right);
    return max(h1,h2)+1;
}

int diameter(BinaryTreeNode<int>*root)
{
    if(root==NULL)
        return 0;
    //recursive case
    int option1=diameter(root->left);
    int option2=diameter(root->right);
    int option3=height(root->left)+height(root->right);
    return max(max(option1,option2),option3);
}

void mirror(BinaryTreeNode<int> *root)
{
	if(root==NULL)
		return;
	BinaryTreeNode<int> *temp=root->left;
	root->left=root->right;
	root->right=temp;
	mirror(root->left);
	mirror(root->right);
}
int main()
{
        BinaryTreeNode<int> *root=NULL;
        root=takeInput<int>();
        levelorderprint(root);
        int key=5;
        BinaryTreeNode<int> *here=find(root,key);
        cout<<here->data;
        mirror(root);
        levelorderprint(root);
}
