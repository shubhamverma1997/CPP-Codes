#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
public:
	long int data;
	long int children_count;
	TreeNode** children;
	TreeNode(long int d):data(d),children_count(0),children(NULL){}
};

long int count;
int flag=1;
TreeNode* takeInput(){

long int data;
    if(count==0&&flag==1)
    return NULL;
    if(flag==1)
    flag=0;
cin>>data;
TreeNode* root = new TreeNode(data);
    if(count==0)
        return root;
    count--;
   root->children_count = count;
root->children = new TreeNode*[count];
long int temp=count;
count=0;
for(long int i=0;i<temp;i++){
	root->children[i] = takeInput();
	}
return root;
}

int sum(TreeNode*root){
	if(root==NULL)
		return 0;

	int current_sum = root->data;
	for(int i=0;i<root->children_count;i++){
		current_sum += sum(root->children[i]);
	}
	return current_sum;
}
int main()
    {
    cin>>count;
    TreeNode*root;
    root=takeInput();
    cout<<sum(root);
    }
