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
int maxDepthRec(TreeNode* root){
    if(root==NULL) return 0;

    int l=maxDepthRec(root->left);
    int r=maxDepthRec(root->right);

    return 1+max(l,r);
}

int maxDepthIter(TreeNode* root){
    int count=0;

    queue<pair<TreeNode*,int>> q;
    q.push(make_pair(root,count));

    while(!q.empty()){
        TreeNode* curr=q.front().first;
        int c=q.front().second;
        q.pop();
        if(curr->left!=NULL){
            q.push({curr->left,c+1});
        }
        if(curr->right!=NULL){
            q.push({curr->right,c+1});
        }
        //if(curr->left!=NULL or curr->right!=NULL)
        count=c;
    }
    return count;
}

int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);
    root->right->right->right=new TreeNode(35);
    // 12 // 1
    // 10 15 //1 
    // 8 9 13 20 //0
    TreeNode* curr=root;
    cout<<maxDepthIter(curr);
}