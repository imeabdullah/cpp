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
// boundary order traversal
// left excluding leaf
// leaf nodes
// right excluding leaf
// anticlockwise traversal

bool isLeaf(TreeNode* root){
    if(root->left == NULL and root->right ==  NULL) return true;
    return false;
}
vector<int> boundaryTrav(TreeNode* root) {
    vector<int> ans;
    TreeNode* curr=root;
    TreeNode* leaf;

    while(!isLeaf(curr)) {
        leaf=curr;
        ans.push_back(curr->val);

        if(curr->left)
            curr=curr->left;
        else
            curr=curr->right;
    }

    ans.push_back(leaf->left->val);
    ans.push_back(leaf->right->val);

    //stack for right subtree
    stack<int> st;
    curr=root->right;

    while(!isLeaf(curr)){
        leaf=curr;
        st.push(curr->val);
        if(curr->right)
            curr=curr->right;
        else
            curr=curr->left;
    }

    st.push(leaf->right->val);
    st.push(leaf->left->val);
    
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
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

    vector<int> ans=boundaryTrav(root);
    for(auto it:ans)
        cout<<it<<" ";
    cout<<endl;
}