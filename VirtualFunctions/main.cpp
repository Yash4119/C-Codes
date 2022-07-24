#include <iostream>

using namespace std;

class Base{

public:
    int var_base = 1;
    virtual void display(){
    cout<<"1. the Value of var_base is = "<<var_base<<endl;
    }
};

class Derived : public Base {
public:
    int var_derived = 2;
    void display(){
    cout<<"2. the value of var base is = "<<var_base<<endl;
    cout<<"2. The value of Var derived is  = "<< var_derived<<endl;
    }
};

int main()
{
    Base * base_class_pointer ;
    Base obj_base;
    Derived obj_derived ;

    base_class_pointer = &obj_derived ;
    base_class_pointer->display();
    return 0;
}
