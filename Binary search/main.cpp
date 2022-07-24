#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Check if a number is a prime number
   /* int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    bool flag=0;
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            cout<<"Non-Prime number"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime number"<<endl;
    }*/

    //Reverse a number

    /*int n ;
    cout<<"enter a number"<<endl;
    cin>>n;

    int reverse = 0;

    while(n>0){
    int lastdigit = n%10;
    reverse = reverse*10 + lastdigit;
    n = n/10;
    }
    cout<<reverse<<endl;*/

    //Armstrong number

    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int sum=0;
    int original = n;

    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit , 3);
        n = n/10;
    }
    if(sum==original){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }

    return 0;
}
