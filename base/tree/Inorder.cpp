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

TreeNode* root;
vector <int> inOrderTrav(TreeNode * root) {
  TreeNode* curr=root;
  vector <int> inOrder;
  stack <TreeNode*> s;
  while (true) {
    if (curr != NULL) {
      s.push(curr);
      curr = curr -> left;
    } else {
      if (s.empty()) break;
      curr = s.top();
      inOrder.push_back(curr -> val);
      s.pop();
      curr = curr -> right;
    }
  }
  return inOrder;
}
int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);

    vector<int> ans=inOrderTrav(root);

    for(auto it:ans) cout<<it<<" ";
    cout<<"\n";
}