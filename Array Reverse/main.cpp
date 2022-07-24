#include <iostream>

using namespace std;

void array_reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<"your array is => ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    array_reverse(arr,n);

    cout<<"your reversed array is => ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
