#include <iostream>

using namespace std;

int main()
{
    /*int row , col;                            //Rectangle pattern
    cout<<"enter the no of colums"<<endl;
    cin>>col;
    cout<<"enter the number of rows"<<endl;
    cin>>row;
    for(int i=1 ; i<=row ; i++){
        for(int j=1 ; j<=col ; j++){
            cout<<" "<<"*";
        }
        cout<<endl;
    }*/

    //Hollow rectangle Pattern

    /*int row , col;
    cout<<"enter no of col"<<endl;
    cin>>col;
    cout<<"enter no of row"<<endl;
    cin>>row;
    for(int i=1 ; i<= row ; i++){
        for(int j=1 ;j<=col ; j++){
            if (i==1 || i==row || j==1 || j==col){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }*/

    //Inverted half Pyramid

    /*int n;
    cout<<"enter n = ";
    cin>>n;
    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=i ; j++){
            cout<<" *";
        }
    cout<<endl;
    }*/

    //Half pyramid after 180 Degree rotation

   /* int n;
    cout<<"enter n = ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            if(j<=(n-i)){
                cout<<"  ";
            }
            else{
                cout<<" *";
            }
        }
        cout<<endl;
    }*/

    //Half Pyramid using numbers

/*int n;
    cout<<"enter n = ";
    cin>>n;
    int k;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<" "<<i;
        }
        cout<<endl;
    }
*/

//Floyd's Triangle

/*int n;
    cout<<"enter n = ";
    cin>>n;
    int count = 1;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<" "<<count;
            count++;
        }
        cout<<endl;
    }*/

    //Butterfly Pattern

    int n;
    cout<<"enter n = ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<" *";
        }
        int space = 2*n - 2*i;
        for(int j=1 ; j<=space ; j++){
            cout<<"  ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=i ; j++){
          cout<<" *";
        }
        int space = 2*n - 2*i;
        for(int j=1 ; j<=space ; j++){
            cout<<"  ";
        }
        for(int j=1 ; j<=i ; j++){
             cout<<" *" ;
        }
        cout<<endl;
    }

    return 0;
}
