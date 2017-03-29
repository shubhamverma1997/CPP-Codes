#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
public:
	int data;
	int children_count;
	TreeNode** children;
	TreeNode(int d):data(d),children_count(0),children(NULL){}
};

TreeNode* takeInput(){

int data,count;
cin>>count;
count=count-1;
cin>>data;
TreeNode* root = new TreeNode(data);
root->children_count = count;
root->children = new TreeNode*[count];

for(int i=0;i<count;i++){
	root->children[i] = takeInput();
	}
return root;
}
int main()
{
    TreeNode*root;
    root=takeInput();
}
