#include <iostream>

using namespace std;

class complex{
int a ;
int b ;
public:
    //initializing constructor operator in the class complex .
    complex (void);
    void printnumber(){
    cout<<"the complex number given by you is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex :: complex (void){
 a = 11;
 b = 20;
}

int main()
{
    cout<<"let's do something exciting "<<endl;
    complex oc;
    oc.printnumber();
    return 0;
}
