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

vector<int> postOrderTrav(TreeNode * curr) {

  vector<int> postOrder;
  if (curr == NULL) return postOrder;

  stack <TreeNode*> s1;
  stack <TreeNode*> s2;
  s1.push(curr);
  
  while (!s1.empty()) {
    curr = s1.top();
    s1.pop();
    s2.push(curr);
    if (curr -> left != NULL)
      s1.push(curr -> left);
    if (curr -> right != NULL)
      s1.push(curr -> right);
  }

  while (!s2.empty()) {
    postOrder.push_back(s2.top() -> val);
    s2.pop();
  }
  return postOrder;
}

int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);

    vector<int> ans=postOrderTrav(root);

    for(auto it:ans) cout<<it<<" ";
    cout<<"\n";
}