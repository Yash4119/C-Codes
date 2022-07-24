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

Node* Construct_BST(int preorder[],int* preorderidx,int key,int mn,int mx,int n){

    if(*preorderidx>=n){
        return NULL;
    }
    Node* root=NULL;
    if(key>mn && key<mx){
        root = new Node(key);
        *preorderidx+=1;

        if(*preorderidx < n){
            root->left = Construct_BST(preorder,preorderidx,preorder[*preorderidx],mn,key,n);
        }
        if(*preorderidx < n){
            root->right = Construct_BST(preorder,preorderidx,preorder[*preorderidx],key,mx,n);
        }

    }
    return root;
}
void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

int main()
{
    int preorder[5] = {10,2,1,13,11};
    int n=5;
    int key=preorder[0];
    int mn = INT_MIN;
    int mx = INT_MAX;
    int preorderidx = 0;
    Node* root = Construct_BST(preorder,&preorderidx,key,mn,mx,n);
    Preorder(root);

    return 0;
}
