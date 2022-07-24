#include <iostream>

using namespace std;

void display(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
int inddeletion(int arr[] , int size , int capacity , int index){
    if(index >= (capacity-1)){
        cout<<"Can't perform Deletion"<<endl;
        return -1;
    }
    for(int i=index ; i<=size-1 ; i++){
        arr[i]=arr[i+1];
    }
    cout<<endl<<"Array after deletion"<<endl;
    size-=1;
    display(arr , size);
}



int main()
{
    int index;
    int arr[100] = {11 , 22 ,33 ,44 ,55 ,66 };
    int size = 6 , capacity  = 100;
    cout<<"array before deletion"<<endl;

    display(arr , size);
    cout<<"enter the index to delete"<<endl;
    cin>>index;


    inddeletion(arr , size , capacity , index);


    return 0;
}
