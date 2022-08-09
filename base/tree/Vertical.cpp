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
vector<vector<int>> verticalTrav(TreeNode* root) {
    map<int,map<int,multiset<int>>> node;

    queue<pair<TreeNode*,pair<int,int>>> q;
    q.push({root,{0,0}});

    while(!q.empty()) {
        TreeNode* curr=q.front().first;
        int vertical = q.front().second.first;
        int level = q.front().second.second;

        node[vertical][level].insert(curr->val);

        if(curr->left)
            q.push({curr->left,{vertical-1,level+1}});
        if(curr->right)
            q.push({curr->right,{vertical+1,level+1}});
    }

    vector<vector<int>> ans;
    for(auto p:node) {
        vector<int> col;
        for(auto q:p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
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

    vector<vector<int>> ans=verticalTrav(root);
    for(auto it:ans) {
        for(auto curr:it)
            cout<<curr<<" ";
        cout<<endl;
    }
}