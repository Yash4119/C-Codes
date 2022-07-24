#include <iostream>

using namespace std;

class complex{
    int a ;
    int b ;

public:
    void setdata(int v1 , int v2){
      a = v1 ;
      b = v2 ;

    }

    void print(){
    cout<<"the complex number entered by you is"<<a<<"+"<<b<<"i"<<endl;

    }
    void setBySum(complex o1 , complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;
    }

};



int main()
{
    complex c1 , c2 , c3 ;
   c1.setdata(1,2);
    c1.print();
   c2.setdata(3,4);
    c2.print();
    c3.setBySum(c1 , c2);
    c3.print();

    return 0;
}
