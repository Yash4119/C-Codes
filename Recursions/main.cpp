#include <iostream>

using namespace std;

int factorial(int n)
{
    while(n>=2){
        return n * factorial(n-1);
    }

}
int main()
{
    int a;
    cout << "Today we will learn Recursions............"<< endl;
    cout<<endl;
    cout<<"enter a number "<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is =  "<<factorial(a)<<endl;


    // n! is also written as n * (n-1)

    return 0;
}
