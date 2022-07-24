#include <iostream>

using namespace std;

class stackoperation{
public:
    int size;
    int* arr;
    int top;
};
int isFull(stackoperation* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(stackoperation* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int pushval(stackoperation* ptr , int val){
    if(isFull(ptr)){
        cout<<"Sorry Can't Push an element \n";
        return 0;
    }
    else{
            ptr->top++;
    ptr->arr[ptr->top] = val;
    }
}
int popval(stackoperation* ptr){
    if(isEmpty(ptr)){
        cout<<"Sorry! Cannot pop any element from the Stack"<<endl;
        return 0;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
//Peek Operation in Stacks

int peekval(stackoperation* ptr , int i){

    int arrind = ptr->top-i+1;
    if(0>arrind){
        cout<<"You Entered The Invalid Position for the Stack"<<endl;
        return -1;
    }
    else{
        return ptr->arr[arrind];
    }
}

int main(){
    stackoperation* sp = new stackoperation();

    sp->size = 8;
    sp->top = -1;
    sp->arr = new int(sp->size *sizeof(int));

    cout<<"Stack HAs Been Created Successfully\n";

    cout<<"Stack is full ?? "<<isFull(sp)<<endl;
    cout<<"Stack is Empty?? "<<isEmpty(sp)<<endl;

    cout<<"Pushing values in a stack"<<endl;
    pushval(sp , 10);
    pushval(sp , 11);
    pushval(sp , 12);
    pushval(sp , 13);
    pushval(sp , 14);
    pushval(sp , 15);
    pushval(sp , 16);
    pushval(sp , 17);
    cout<<endl;
    cout<<"Stack is full ?? "<<isFull(sp)<<endl;
    cout<<"Stack is Empty?? "<<isEmpty(sp)<<endl;
cout<<endl;
    cout<<"Pooped "<<popval(sp)<<" from the stack"<<endl;
    cout<<"Pooped "<<popval(sp)<<" from the stack"<<endl;
    cout<<"Pooped "<<popval(sp)<<" from the stack"<<endl;

    cout<<endl;
    cout<<"Stack is full ?? "<<isFull(sp)<<endl;
    cout<<"Stack is Empty?? "<<isEmpty(sp)<<endl;
cout<<endl;
    cout<<"Peeking Elements in a stack"<<endl;
    cout<<endl;
    int j =1;
    for(j = 1 ; j<=sp->top ; j++){
        cout<<"Element at position "<<j<<" is "<<peekval(sp , j)<<endl;
    }

    return 0;
}
