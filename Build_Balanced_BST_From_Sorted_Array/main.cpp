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

Node* Build_BST_From_Sorted_Array(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }

    int mid = (start+end)/2;
    Node* root = new Node(arr[mid]);

    root->left = Build_BST_From_Sorted_Array(arr,start,mid-1);
    root->right = Build_BST_From_Sorted_Array(arr,mid+1,end);

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
void Inorder(Node* root){
    if(root==NULL){
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main()
{
    int arr[] = {10,20,30,40,50};

    Node* root = Build_BST_From_Sorted_Array(arr,0,4);
    Preorder(root);
    cout<<endl;
    Inorder(root);
    return 0;
}
