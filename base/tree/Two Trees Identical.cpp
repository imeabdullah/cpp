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

bool isSame(TreeNode* p,TreeNode* q){
    if(p==NULL and q==NULL) return true;

    //return (p->val==q->val) and isSame(p->left,q->left) and isSame(p->right,q->right);
    bool leftAns=isSame(p->left,q->left);
    bool rightAns=isSame(p->right,q->right);

    return (p->val==q->val) and leftAns and rightAns;
}

int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);

    cout<<isSame(root,root)<<endl;

}