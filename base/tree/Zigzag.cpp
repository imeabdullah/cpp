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

vector<vector<int>> zigzagTrav(TreeNode* root){
    vector<vector<int>> result;
    if(root==NULL) return result;

    queue<TreeNode*> q;
    q.push(root);
    bool f=1;
    while (!q.empty()) {
        int size=q.size();
        vector<int> ans(size);

        for(int i=0;i<size;i++){
            int ind=f?i:(size-i-1);
            TreeNode* node=q.front();
            q.pop(); 
            ans[ind]=node->val;

            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        f=!f;
        result.push_back(ans);
    }
    return result;
}

int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);

    vector<vector<int>> ans=zigzagTrav(root);
}