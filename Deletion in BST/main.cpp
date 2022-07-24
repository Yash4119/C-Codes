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
Node* Inorder_Successer(Node* root){
    Node* curr = root;

    while(curr && curr->left!=NULL){
        curr = curr->left;
    }
    return curr;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node* Delete_In_BST(Node* root,int val){

    if(val < root->data){
        root->left = Delete_In_BST(root->left , val);
    }
    else if(val > root->data){
        root->right = Delete_In_BST(root->right , val);
    }
    else{
        if(root->left ==NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right ==NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
    Node* temp = Inorder_Successer(root->right);
    root->data = temp->data;
    root->right = Delete_In_BST(root->right , temp->data);
    }
    return root;

}

int main()
{
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    cout<<"The Original Binary Tree Is :- ";
    inorder(root);
    cout<<endl;
    root = Delete_In_BST(root,2);
    cout<<endl;
    cout<<"The Binary tree After Deletion is :- ";
    inorder(root);
    cout<<endl;

    return 0;
}
