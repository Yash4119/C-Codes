#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
};

void linkedlist(node* head){
    node* ptr = head;

    do{
        cout<<"The Element is "<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr!=NULL);
}

node* ReverseTraversal(node* head){
    node* ptr = head;
    node * p = ptr->next;

    ptr->next = NULL;
    ptr->prev = p;

    while(p!=NULL){
        p->prev = p->next;
        p->next = ptr;
        ptr = p;
        p = p->prev;
    }
    head = ptr;
    return head;

   /* node* ptr = head;
    node* temp = NULL;

//   NULL<-- | prev | 1 | next  |--><--| prev | 2 | next  |--><--| prev | 3 | next |--><--| prev | 4 | next |-->NULL
    while(ptr!=NULL){
        temp = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = temp;
        ptr = ptr->prev;
    }
    if(temp != NULL){
        head = temp->prev;
    }

    //head = ptr;
    //return head;*/
}

int main(){
    cout << "Creation Of A Doubly Linked List" << endl;

    node* head = NULL;
    node* second = NULL;
    node* third = NULL;
    node* fourth = NULL;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();

    head->prev = NULL;
    head->data = 1;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = fourth;

    fourth->prev = NULL;
    fourth->data = 4;
    fourth->next = NULL;

    cout<<endl<<"The doubly Linked List is "<<endl;
    linkedlist(head);

    cout<<endl<<"The Reverse doubly Linked List is "<<endl;
    head = ReverseTraversal(head);
    linkedlist(head);

    return 0;
}
