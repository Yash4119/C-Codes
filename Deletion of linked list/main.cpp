#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;
};

//deleting a node at beginning

node* DeletionAtFirst(node*head){
    node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//deleting the node in between

node* DeletionInBetween(node* head , int index){
   node* p = head;
   node* q = head->next;

   for(int i = 0 ; i<index-1 ; i++){
    p = p->next;
    q = q->next;
   }
   p->next = q->next;
   free(q);
   return head;
}
//deleting a node at end

node* DeleteAtEnd(node* head){
    node* p = head;
    node* q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
   p->next = NULL;
   free(q);
   return head;
}
//deleting a node With A given value

node* DeleteAtValue(node* head , int value){
    node* p = head;
    node* q = head->next;

    while(q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}

void display(node* ptr){
    int count=1;



    while(ptr!=NULL){
        cout<<"The Element "<<count<<" is "<<ptr->data<<endl;
        ptr = ptr->next;
        count++;
    }
}

int main()
{
    node* head;
    node* second;
    node* third;
    node* fourth;
    node* fifth;
    node* sixth;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();
    sixth = new node();

    head->data=11;
    head->next=second;

    second->data=12;
    second->next=third;

    third->data=13;
    third->next=fourth;

    fourth->data=14;
    fourth->next=fifth;

    fifth->data=15;
    fifth->next = sixth;

    sixth->data=16;
    sixth->next = NULL;

    display(head);
    cout<<"Deleting First Element"<<endl;
    head = DeletionAtFirst(head);
    display(head);

    cout<<"Deleting Element at Index 2"<<endl;
    head = DeletionInBetween(head , 2);
    display(head);

    cout<<"Deleting Element at End"<<endl;
    head = DeleteAtEnd(head);
    display(head);

    cout<<"Deleting a Given Value"<<endl;
    head = DeleteAtValue(head , 15);
    display(head);

    return 0;
}
