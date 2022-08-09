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

vector<int> bottomView(TreeNode* root){
    vector<int> ans;
    if(root==NULL) return ans;

    map<int,int> mp;
    queue<pair<TreeNode*,int>> q; // Node and vertical

    q.push({root,0});

    while(!q.empty()) {
        TreeNode* curr = q.front().first;
        int vertical = q.front().second;
        q.pop();
        
        mp[vertical] = curr->val;
        
        if(curr->left)
            q.push({curr->left,vertical-1});
        if(curr->right)
            q.push({curr->right,vertical+1});
    }
    for(auto it:mp)
        ans.push_back(it.second);
    return ans;
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

    vector<int> ans=bottomView(root);
    for(auto it:ans) {
        cout<<it<< " ";
    }
    deleteNodes(root);
}