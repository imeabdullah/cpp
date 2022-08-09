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
vector<int> levelOrder(TreeNode* root) {
    vector<int> ans; 
        
    if(root == NULL) 
        return ans; 
            
    queue<TreeNode*> q; // it will save address 
    q.push(root); 
        
    while(!q.empty()) {   
        TreeNode *temp = q.front(); 
        q.pop(); 
            
        if(temp->left != NULL) 
            q.push(temp->left); 
        if(temp->right != NULL) 
            q.push(temp->right); 
                
        ans.push_back(temp->val); 
    }
    return ans; 
}

int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);

    vector<int> ans=levelOrder(root);

    for(auto it:ans) cout<<it<<" ";
    cout<<"\n";
}