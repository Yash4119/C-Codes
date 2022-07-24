#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the Three Nos"<<endl;
    cin>>a>>b>>c;

    cout<<endl<<"Finding The Largest Number"<<endl;
    if(a<b && a<c){
        cout<<a<<" is The Largest Number"<<endl;
    }
    else if(b<a && b<c){
        cout<<b<<" is The Largest Number"<<endl;
    }
    else{
        cout<<c<<" is The Largest Number"<<endl;
    }
    return 0;
}
