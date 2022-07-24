#include <iostream>

using namespace std;

int main()
{
    /*int n ;
    cout<<"enter a number"<<endl;
    cin>>n;//To find out prime numbers form 1 to 50
    int i;
    for (i=2 ; i<n ; i++){

        if(n%i==0){
            cout<<"Non Prime Number"<<endl;
            break;
        }
    }
   if(i==n){
        cout<<n<<" is a Prime Number "<<endl;
    }*/


    int a , b;
    cout<<"enter"<<endl;
    cin>>a>>b;

    for(int num=a ; num<=b ; num++){
       int i;
        for(i=2 ; i<num ; i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<endl<<num<<endl;
        }
    }

    return 0;
}
