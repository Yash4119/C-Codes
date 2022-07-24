#include <iostream>

using namespace std;

class base1{

public:
    void say(void){
    cout<<"hi I'm base 1"<<endl;
    }
};
class base2{
public:
    void say(void){
    cout<<"I'm base 2 "<<endl;
        }
};
class derived : public base1 , public base2{
int a;
public:
    void say(){
    base2 :: say();
    }
};
int main()
{
cout<<"let's clear the ambiguuity"<<endl;
derived d1;
d1.say();
    return 0;
}
