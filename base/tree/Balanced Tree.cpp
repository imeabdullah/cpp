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
int dfsHeight(TreeNode* root){
    if(root==NULL) return 0;

    int leftH=dfsHeight(root->left);
    if(leftH==-1) return -1;
    int rightH=dfsHeight(root->right);
    if(rightH==-1) return -1;

    if(abs(rightH-leftH)>1) return -1;

    return max(leftH,rightH)+1;
}
bool isBalanced(TreeNode* root){
    return dfsHeight(root)!=-1;
}



int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    //root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    //root->right->left=new TreeNode(13);
    //root->right->right=new TreeNode(20);

    cout<<isBalanced(root)<<endl;
}