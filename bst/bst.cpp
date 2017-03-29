#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
class binarytreenode{
    public:
    int data;
    binarytreenode*left;
    binarytreenode*right;
    binarytreenode(int n):data(n),left(NULL),right(NULL)
    {
    }
};
binarytreenode*insert(binarytreenode*root,int element)
{
    if(root==NULL)
    {
        binarytreenode*newnode=new binarytreenode(element);
        return newnode;
    }
    if(element<root->data)
        root->left=insert(root->left,element);
    else
        root->right=insert(root->right,element);
    return root;
}
binarytreenode*takebst(binarytreenode*root)
{
    int data;
    cout<<"enter the element "<<endl;
    cin>>data;
    root=NULL;
    while(data!=-1)
    {
        root=insert(root,data);
        cin>>data;
    }
    return root;
}

    void ranger(binarytreenode*root,int k1,int k2)
    {
        if(root==NULL)
            return;
        if(root->data>=k1&&root->data<=k2)
        {
            cout<<root->data<<" ";
        }
        ranger(root->left,k1,k2);
        ranger(root->right,k1,k2);
    }

void levelorderprint(binarytreenode*root){

queue<binarytreenode * > q;

q.push(root);
q.push(NULL);

	while(!q.empty()){
		binarytreenode *f = q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			q.pop();
			cout<< f->data;
			if(f->left!=NULL){
				q.push(f->left);
			}
			if(f->right!=NULL){
				q.push(f->right);
			}

		}
	}
}
class pairof{
    public:
    binarytreenode*head;
    binarytreenode*tail;
    pairof():head(NULL),tail(NULL)
    {}
};
/*pairof contolink(binarytreenode*root)//coverting bst to linked list
{
    pairof p;
    if(root==NULL)
    {
        p.head=NULL;
        p.tail=NULL;
        return p;
    }


    pairof leftll=contolink(root->left);
    pairof rightll=root->right=root;
    if(leftll->left==NULL&&rightll->right==NULL)
    {
        p.head=root;
        p.tail=root;
        return p;
    }
    else if(leftll->left!=NULL&&rightll->right==NULL)
    {
        p.head=leftll.head;
        leftll.tail->right=root;
        p.tail=root;
        return p;
    }

}*/
class pair2{
    public:
    int height;
    bool v;
};

pair2 isbalanced(binarytreenode*root)
{
    pair2 p;
    if(root==NULL)
    {
        p.height=0;
        p.v=true;
        return p;
    }

    pair2 p1=isbalanced(root->left);
    pair2 p2=isbalanced(root->right);

    int h1=p1.height;
    int h2=p2.height;
    p.height=max(h1,h2)+1;
    if(abs(h1-h2)<=1&&p1.v==true&&p2.v==true)
    {
        p.v=true;
        return p;
    }

    else
    {
        p.v=false;
        return p;
    }
}
bool isbst(binarytreenode*root,int minn,int maxn)  //to check if the binary tree is a bst
{
    if(root==NULL)
        return true;
    if(root->data<=maxn&&root->data>=minn&&isbst(root->left,minn,root->data)&&isbst(root->right,root->data,maxn))
        return true;
    return false;
}

void mirror(binarytreenode *root){
	if(root==NULL)
		return ;


	//Recursive
	//Swap the pointers for current node
	binarytreenode*temp = root->left;
	root->left = root->right;
	root->right = temp;

	//For left and right subtrees(mirror recursively)
	mirror(root->left);
	mirror(root->right);

}

binarytreenode* makebst(binarytreenode*root,int arr[],int start,int ending)
{
    if(start==ending)
    {

    }
}
int main()
{
    binarytreenode *root;
    root=takebst(root);
       // levelorderprint(root);
        //ranger(root,1,7);
       // pairof p=contolink(root);
    //lprint(p);
    isbst(root,-100000,100000)==true?cout<<"yes":cout<<"no";
}
