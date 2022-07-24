#include <iostream>

using namespace std;

int sum_of_n(int n){
    if(n<=0){
        return 0;
    }

    return n+sum_of_n(n-1);
}
int raised_to(int n,int p){
    if(p<=0){
        return 1;
    }

    int prevpower = raised_to(n,p-1);
    return n*prevpower;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int fibo(int n){
    if(n==0 or n==1){
        return n;
    }

    return fibo(n-1)+fibo(n-2);
}

bool issorted(int a[] , int n){
    if(n==1){
        return true;
    }

    bool restarray = issorted(a+1,n-1);   //arr+1 moves the pointer 1 element ahead and n-1 decreases size of array by 1
    return (a[0]<a[1] && restarray);

}
void print(int n){
    if(n==0){

        return;
    }
    cout<<n<<" ";
    print(n-1);
}
void print_inc(int n){
    if(n==0){
        return;
    }
    print_inc(n-1);
    cout<<n<<" ";
}
int first_occ(int arr[] , int n, int i, int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return first_occ(arr,n,i+1,key);
}
int last_occ(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }

    int restarray = last_occ(arr,n,i+1,key);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;

}

int main()
{
    //sum of n numbers
    cout<<"Sum of N numbers :-  "<<sum_of_n(5)<<endl;

    //n raised to power power p
    int n=2,p=4;
    cout<<"N raised too P is :-  "<<raised_to(n,p)<<endl;

    //Factorial of a number
    cout<<"Factorial of N is :-  "<<fact(3)<<endl;

    //Fibonacci series
    int a=6;
    cout<<"Fibonacci series's "<<a<<"th term is:-  "<<fibo(a)<<endl;

    //to check if a array is sored or not using recursion
    int c[6] = {1,2,3,4,5,6};
    if(issorted(c,6)){
     cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

    //to print number till n in decreasing order
    print(5);
    cout<<endl;
    //print number till n in increasing order
    print_inc(10);
    cout<<endl;
    //print first and last occurrence of a element in an array
    int arr[10] = {1,2,3,4,2,5,6,2,7,2};
    cout<<"first occurrence of 2 is at index :-  "<<first_occ(arr,10,0,2)<<endl;
    cout<<"last occurrence of 2 is at index :-  "<<last_occ(arr,10,0,2)<<endl;


    return 0;
}
