#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

struct Node
{
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};


int main()
{
    // ways of declaring a struct object
    // Node n=Node(12);
    // Node n(10);
    // Node n1={12,0};
    
    // derefencing an object type pointer
    Node *p=new Node(12);
    cout<<p->data<<endl;

    // declaring an object type reference in c
    Node *n=(Node*) malloc(sizeof(Node));
    free(n);




   
}