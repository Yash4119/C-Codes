#include <iostream>

using namespace std;
class node{
public:
    node* next;
    int data;
};
//Insertion In circular linked list at First

node* InsertAtFirst(node* head , int data){
    node* ptr = new node();
    ptr->data = data;
    node* p = head->next;

    while(p->next != head){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;

}

void linkedlisttraversal(node* head){
    node* ptr = head;

    do{
        cout<<"The element is "<<ptr->data<<endl;
        ptr = ptr->next;
    }while(ptr!=head);

}

int main()
{
    node* head;
    node* second;
    node* third;
    node* fourth;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();

    head->data = 5;
    head->next=second;

    second->data = 4;
    second->next=third;

    third->data = 3;
    third->next=fourth;

    fourth->data = 2;
    fourth->next=head;

    cout<<"Linked List Before Traversal"<<endl;
    linkedlisttraversal(head);

    cout<<"Linked List After Traversal"<<endl;
    head = InsertAtFirst(head , 6);
    head = InsertAtFirst(head , 7);
    head = InsertAtFirst(head , 8);
    linkedlisttraversal(head);

    return 0;
}
