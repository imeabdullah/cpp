#include<bits/stdc++.h>

using namespace std;
template<class T>
class Node{
    public:
    T val;
    Node* left=NULL;
    Node* right=NULL;
};

template<class T>
class Tree{
    public:
    Node<T> *root=NULL;


    void insert(T val){
        Node<T>* node=new Node<T>();
        node->val=val;

        if(root==NULL){
            root=node;
            return;
        }

        // Iterarive Insertion 
        Node<T>* ptr = root;;
        Node<T>* y=NULL;
        while (ptr != NULL) {
            y = ptr;
            if (val < ptr->val)
                ptr = ptr->left;
            else
                ptr = ptr->right;
        }

        

        if (val < y->val)
            y->left = node;
        else
            y->right = node;
    }

    void inOrder(Node<T>* ptr){

        if(ptr==NULL) return;

        inOrder(ptr->left);
        cout<<ptr->val<<" ";
        inOrder(ptr->right);
    }

    void preOrder(Node<T>* ptr){
        if(ptr==NULL) return;

        cout<<ptr->val<<" ";
        preOrder(ptr->left);
        preOrder(ptr->right);
    }

    void postOrder(Node<T>* ptr){
        if(ptr==NULL) return;

        postOrder(ptr->left);
        postOrder(ptr->right);
        cout<<ptr->val<<" ";
    }
};


int main(){
    Tree<int> t;
    t.insert(12);
    t.insert(10);
    t.insert(15);


    Node<int>* ptr=t.root;
    cout<<"Inorder Traversal:";
    t.inOrder(ptr);
    cout<<endl;
    cout<<"Preorder Traversal:";
    t.preOrder(ptr);
    cout<<endl;
     cout<<"Postorder Traversal:";
    t.postOrder(ptr);
}