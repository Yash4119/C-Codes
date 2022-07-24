#include <iostream>

using namespace std;

class complex;

template <class T>
class calculator{
public:
    T sumrealcomplex(complex o1 , complex o2){
    T c;
    c = o1.a + o2.a;
    return c;
    }
    T sumcomplexpart(complex o1 , complex o2){
    T d;
    d = o1.b + o2.b;
    return d;
    }
     void display(){
    cout<<endl<<"Doing addition of Vectors "<<endl;

    cout<<"Your Required Answer is :-"<<endl<<c<<"i + "<<d<<"j"<<endl;
    }
};

template < class T = int >
class complex{

T a ;
T b ;

public:
    friend class calculator;
    T setdata(T data1 , T data2){
    a = data1;
    b = data2;
    cout<<"The complex Number is :-"<<endl<<a<<"i + "<<b<<"j"<<endl;
    cout<<endl;
    }


};


int main()
{
    complex<int> o1;
    o1.setdata(2,3);


    complex<int> o2;
    o2.setdata(4,5);




    return 0;
}
