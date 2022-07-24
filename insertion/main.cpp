#include <iostream>

using namespace std;

class node{
public:
    int data ;
    node*next;
};

//insert at the beginning
node* insertatfirst(node*head , int data){
    node* ptr=new node();
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

//insert at the end
node* insertatend(node* head, int data){
    node* ptr = new node();
    ptr->data=data;
    node*p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
//insert at index

node* insertatindex(node* head, int data , int index){
    node*ptr=new node();

    node*p = head;

    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next = ptr;
return head;
}
//insert after node

node* insertafternode(node* head, node* prevnode , int data){
    node*ptr = new node();
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next = ptr;

    return head;
}

//display of the linked list
 void give(node*ptr){
    int count=1;

    while(ptr!=NULL){
        cout<<"The Element "<<count<<" is "<<ptr->data<<endl;
        ptr=ptr->next;
        count++;
    }
    }

int main()
{

    node*head;
    node*second;
    node*third;
    node*fourth;

    head=new node();
    second=new node();
    third=new node();
    fourth=new node();

    head->data=12;
    head->next=second;

    second->data=14;
    second->next=third;

    third->data=16;
    third->next=NULL;

    cout<<"Linked list Before insertion"<<endl;
    give(head);

    cout<<endl<<"Insertion at Beginning"<<endl;
    head = insertatfirst(head , 11);
    give(head);

    cout<<endl<<"insertion At End"<<endl;
    head = insertatend(head,17);
    give(head);

    cout<<endl<<"insertion At Index"<<endl;
    int index;
    cout<<"enter index"<<endl;
    cin>>index;
    head = insertatindex(head,13,index);
    give(head);

    cout<<endl<<"insertion At Index"<<endl;
    head = insertafternode(head,second,15);
    give(head);



    return 0;
}
