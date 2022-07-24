#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;
};

int linked_list_traversal(node*ptr){
    int count =1;
    while(ptr!=NULL){

        cout<<"the element "<<count<<" is "<<ptr->data<<endl;
        ptr=ptr->next;
        count++;
    }
}

int main()
{
    node* head;
    node* second;
    node* third;
    head = new node();
    second = new node();
    third = new node();


    head->data=10;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=12;
    third->next=NULL;

    linked_list_traversal(head);

    return 0;
}
