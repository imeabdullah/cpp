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

vector <int> postOrderTrav(TreeNode * cur) {

  vector<int> postOrder;
  if (cur == NULL) return postOrder;

  stack<TreeNode*> st;
  while(cur != NULL || !st.empty()) {

    if (cur != NULL) {
      st.push(cur);
      cur = cur -> left;
    } else {
      TreeNode * temp = st.top() -> right;
      if (temp == NULL) {
        temp = st.top();
        st.pop();
        postOrder.push_back(temp -> val);
        while (!st.empty() && temp == st.top() -> right) {
          temp = st.top();
          st.pop();
          postOrder.push_back(temp -> val);
        }
      } else cur = temp;
    }
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