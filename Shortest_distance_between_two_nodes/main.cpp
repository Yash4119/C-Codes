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

Node* LCA(Node* root , int n1 , int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;  //as the LCA will be root itself
    }
    Node* left = LCA(root->left,n1,n2);
    Node* right = LCA(root->right,n1,n2);

    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left==NULL && right==NULL){
        return NULL;
    }
    if(left!=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
}

int finddist(Node* root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left = finddist(root->left,k,dist+1);
    if(left != -1){
        return left;
    }
    return finddist(root->right,k,dist+1);
}

int dist_btwn(Node* root,int n1,int n2){
    Node* lca = LCA(root,n1,n2);
    int d1 = finddist(lca,n1,0);
    int d2 = finddist(lca,n2,0);

    return (d1+d2);
}

int main()
{
  /*  Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(3);
    root->left->right = new Node(4);

    root->right->right = new Node(5);
    root->right->right->right = new Node(7);
    root->right->right->left = new Node(8);
    root->right->right->right = new Node(9);*/
    Node* root= new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
   // root->left->right = new Node(12);
   // root->right->left = new Node(13);
    root->right->right = new Node(5);

    cout<<"distance is :- "<<dist_btwn(root,4,5)<<endl;

    return 0;
}
