#include <iostream>

using namespace std;

class node{
public:
    int data ;
    node*next;


    void give(node*ptr){
    int count=1;
    while(ptr!=NULL){
        cout<<"The Element "<<count<<" is "<<ptr->data<<endl;
        ptr=ptr->next;
        count++;
    }
    }
};

int main()
{
    //Insert At first
    node* head;
    node* second;
    node* third;
    node*fourth;

    head=new node();
    second=new node();
    third=new node();
    fourth=new node();

    head->data=12;
    head->next=second;

    second->data=13;
    second->next=third;

    third->data=14;
    third->next=fourth;

    fourth->data=15;
    fourth->next=NULL;

    give(head);

    return 0;
}
