#include <iostream>

using namespace std;

int sum(int a , int b)
{
    cout<<endl;
    cout<<"using 2 variables"<<endl;
    return a+b;
}
int sum(int a , int b, int c)
{
    cout<<endl;
    cout<<"using 3 variables"<<endl;
    return a+b+c;
}
int main()
{
   cout<<"sum of 3 and 5 is "<<sum(3,5)<<endl;
   cout<<"sum of 3 , 6 and 5 is "<<sum(3,6,5)<<endl;
    return 0;
}
