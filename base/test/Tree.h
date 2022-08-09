template<class T>
class TreeNode{
    T val;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(T val){
        this->val=val;
        left=NULL;
        right=NULL;
    } 
};
template<class T>
class Tree{

};

template<class T>
void deleteNodes(TreeNode<T> *root){
    if(root==NULL) return;

    deleteNodes(root->left);
    deleteNodes(root->right);
    
    delete root;
}
