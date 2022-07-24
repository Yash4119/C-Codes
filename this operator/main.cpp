#include <iostream>

using namespace std;

class A{
int a;
public:
    //A& setdata(int a){
    void setdata(int a){
    this->a = a;
   // *this;
    }
    void getdata(){
        cout<<"The value of a Operator is = "<<a<<endl;
    cout<<"Here we used This -> Operator"<<endl;
    }
};

int main()
{
    A a;
    a.setdata(10);
    a.getdata();

    return 0;
}
