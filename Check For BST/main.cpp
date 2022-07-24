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

bool Check_BST(Node* root , Node* min=NULL, Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>= max->data){
        return false;
    }
   bool leftvalid = Check_BST(root->left,min,root);
   bool rightvalid = Check_BST(root->right, root ,max);

   return leftvalid and rightvalid;
}

int main()
{
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(3);

    if(Check_BST(root,NULL,NULL)){
        cout<<"Valid BST"<<endl;
    }
    else{
        cout<<"Unvalid BST"<<endl;
    }


    return 0;
}
