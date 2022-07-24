#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* Insert_BST(Node* root , int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<(root->data)){
        root->left = Insert_BST(root->left,val);
    }
    else if(val>(root->data)){
        root->right = Insert_BST(root->right,val);
  }
    return root;
}

void InOrder_Traversal(Node* root){
    if(root==NULL){
        return;
    }
    InOrder_Traversal(root->left);
    cout<<root->data<<" ";
    InOrder_Traversal(root->right);
}

int main()
{
    Node* root = NULL;
    root = Insert_BST(root,5);
    Insert_BST(root,1);
    Insert_BST(root,3);
    Insert_BST(root,4);
    Insert_BST(root,2);
    Insert_BST(root,7);

    InOrder_Traversal(root);
    return 0;
}
