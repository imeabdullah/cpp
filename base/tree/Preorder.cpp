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
vector < int > preOrderTrav(TreeNode * curr) {
  vector < int > preOrder;
  if (curr == NULL)
    return preOrder;

  stack <TreeNode*> s;
  s.push(curr);

  while(!s.empty()) {
    TreeNode* topNode = s.top();
    preOrder.push_back(topNode -> val);
    s.pop();
    if (topNode -> right != NULL)
      s.push(topNode -> right);
    if (topNode -> left != NULL)
      s.push(topNode -> left);
  }
  return preOrder;

}
int main(){
    root=new TreeNode(12);
    root->left=new TreeNode(10);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(8);
    root->left->right=new TreeNode(9);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(20);

    vector<int> ans=preOrderTrav(root);

    for(auto it:ans) cout<<it<<" ";
    cout<<"\n";
}