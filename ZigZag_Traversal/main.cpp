#include <iostream>
#include<bits/stdc++.h>
#include <stack>
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

void zigzagTraversal(Node* root){
    if(root==NULL){
        return;
    }

    stack<Node*>currlevel;
    stack<Node*>nextlevel;

    bool leftToright = true;

    currlevel.push(root);

    while(!currlevel.empty()){
    Node* temp = currlevel.top();
    currlevel.pop();

    if(temp){               //temp!=NULL
        cout<<temp->data<<" ";

    if(leftToright){
        if(temp->left){
            nextlevel.push(temp->left);
        }
        if(temp->right){
            nextlevel.push(temp->right);
        }
    }
    else{
        if(temp->right){
            nextlevel.push(temp->right);
        }
        if(temp->left){
            nextlevel.push(temp->left);
        }
    }
    }
    if(currlevel.empty()){
       leftToright = !leftToright;
    swap(currlevel,nextlevel);

     }
    }
}

int main()
{
    Node* root = new Node(8);
    root->left = new Node(6);
    root->right = new Node(10);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->right->left = new Node(9);
    root->right->right = new Node(11);
    /*
                            8
                           / \
                          6   10
                         /\    /\
                        4  7  9  11

    ZigZag Traversal :- | 8 | 10 | 6 | 4 | 7 | 9 | 11 |
    */

    zigzagTraversal(root);


    return 0;
}
