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
int diameterOfTree(TreeNode* root,int &maxi){
    if(root==NULL) return 0;

    int leftH=diameterOfTree(root->left,maxi);
    int rightH=diameterOfTree(root->right,maxi);
    
    maxi=max(maxi,(leftH+rightH));

    return 1+max(leftH,rightH);
}

int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);

    int maxi=0;
    diameterOfTree(root,maxi);
    cout<<maxi<<endl;

}