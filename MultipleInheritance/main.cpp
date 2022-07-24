#include <iostream>

using namespace std;
class base1{
protected:
    int base1;
public:
    void set_base1(int a){
    base1 = a;
    }

};
class base2{
protected:
    int base2;
public:
    void set_base2(int b){
    base2 = b;
    }
};
class base3{
protected:
    int base3;
public:
    void set_base3(int c){
    base3 = c;
    }
};

class derived : public base1 , public base2 , public base3
{
public:
    void show(){
    cout<<"the value of base 1 is "<<base1<<endl;
    cout<<"The value of base 2 is "<<base2<<endl;
    cout<<"The value of base 3 is "<<base3<<endl;
    int a = base1 + base2 + base3;
    cout<<"sum is "<<a<<endl;
    }

};

int main()
{
    cout<<"lets Start with Multiple Inheritance"<<endl;
    derived d1;
    d1.set_base1(12);
    d1.set_base2(18);
    d1.set_base3(20);
    d1.show();


    return 0;
}
