#include <iostream>

using namespace std;

void display(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }
}
int indinsertion(int arr[] , int size , int capacity , int index , int element){
    if(size>=capacity){
        cout<<"insertion not possible"<<endl;
        return -1;
    }
    for(int i = (size-1) ; i>=index ; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int size = 6, capacity = 100, index = 3;
    int arr[100] = {1 ,12 ,23 ,34 ,45 ,56};
    cout<<"Array before insertion"<<endl;
    display(arr , size);

    int a;
    cout<<"Enter element to insert in array"<<endl;
    cin>>a;
    int element = a;


    cout<<"running insertion function"<<endl;
    indinsertion(arr , size , capacity , index , element);

    cout<<endl<<"Array after insertion"<<endl;
    display(arr , size+1);

    return 0;
}
