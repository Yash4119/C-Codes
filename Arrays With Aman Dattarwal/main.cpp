#include <iostream>
#include <climits>
using namespace std;

//for linear search of array

int linearsearch(int arr[] , int n , int key){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            return i;
        }
        else{
            return -1;
        }
    }
}
//For Binary Search

int binarysearch(int arr[] , int n , int key){
    int e = n;
    int s=0;
    while(s<=n){
            int mid = (s+e)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid]<=key){
        s = mid+1;

    }
    else{
        e = mid-1;

    }

    }

}


int main()
{
    //Creating an array with user input
   /* int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];

    for(int i=1 ; i<=n ; i++){
        cout<<"Enter "<<i<<"th element of array"<<endl;
        cin>>arr[i];
    }
    cout<<"Array = {";
    for(int i=1; i<=n; i++){
        cout<<" "<<arr[i]<<",";
    }
    cout<<"}";*/

    //to find Out maximum and minimum element of the array

/*int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++){
        cout<<"Enter "<<i<<"th element of array"<<endl;
        cin>>arr[i];
    }
    int maxNo= INT_MIN;
    int minNo= INT_MAX;

    for(int i=0 ; i<n ; i++){
        maxNo = max(maxNo , arr[i]);
        minNo = min(minNo , arr[i]);
    }

    cout<<"Maximum = "<<maxNo<<endl<<"Minimum = "<<minNo<<endl;*/

    //Searching in arrays

    /*int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];

    for(int i = 0 ; i<n ; i++){
        cout<<i<<" ";
        cin>>arr[i];
    }
    int key;
    cout<<"enter key to find "<<endl;
    cin>>key;
    cout<<linearsearch(arr , n , key);*/

    //For Binary Search
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++){
        cout<<i<<" ";
        cin>>arr[i];
    }
     int key;
    cout<<"enter key to find "<<endl;
    cin>>key;
    cout<<binarysearch(arr , n , key);


    return 0;
}
