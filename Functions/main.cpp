#include <iostream>

using namespace std;

int sum(int a, int b){
int c = a + b;
return c;

}
int multiple(int a , int b){
int d = a * b;//A and B are formal parameters which take the values of num1 and num2
return d;

}
int main()
{
    int num1 , num2;
    cout<<"enter value of num1"<<endl;
    cin>>num1;
    cout<<"enter value of num2"<<endl;
    cin>>num2;
    cout<<"sum of num1 and num2 is = "<<sum(num1,num2)<<endl;
    cout<<"Product of num1 and num2 is = "<<multiple(num1,num2)<<endl;
    return 0;
}
