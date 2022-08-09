#include<bits/stdc++.h>

using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left=NULL;
    TreeNode* right=NULL;

    TreeNode(int val){
        this->val=val;
    }
};
TreeNode* root=NULL;

void rightView(TreeNode* root,int level,vector<int> &ds){
    if(root==NULL) return;

    if(ds.size()==level) 
        ds.push_back(root->val);
    rightView(root->right,level+1,ds);
    rightView(root->left,level+1,ds);
}

void leftView(TreeNode* root,int level,vector<int> &ds){
    if(root==NULL) return;

    if(ds.size()==level) 
        ds.push_back(root->val);
    leftView(root->left,level+1,ds);
    leftView(root->right,level+1,ds);
}

void deleteNodes(TreeNode *root){
    if(root==NULL) return;

    deleteNodes(root->left);
    deleteNodes(root->right);
    
    delete root;
}

int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);
    vector<int> ans;
    rightView(root,0,ans);
    for(auto it:ans) {
        cout<<it<< " ";
    }
    deleteNodes(root);
}