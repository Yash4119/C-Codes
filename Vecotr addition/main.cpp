#include <iostream>

using namespace std;

class complex;

template <class T>
class calculator{
public:
    sumrealcomplex(complex o1 , complex o2);
    sumcomplexpart(complex o1 , complex o2);

};

template <class T1>
class complex{

T1 a ;
T1 b ;
//int a , b ;
friend class calculator;
public:

    T1 setdata(T1 data1 , T1 data2){
    //int setdata(int data1 , int data2){
    a = data1;
    b = data2;
    cout<<"The Vector is :-"<<endl<<a<<"i + "<<b<<"j"<<endl;
    cout<<endl;
    }
};
template <class T>
int calculator<T> :: sumrealcomplex(complex o1 , complex o2){

    return (o1.a + o2.a);
    }
template <class T>
int calculator<T> :: sumcomplexpart(complex o1 , complex o2){

    return (o1.b + o2.b);
    }

int main()
{
    complex<int> o1;
    o1.setdata(2,3);

    complex<int> o2;
    o2.setdata(4,5);

    calculator<int> calc;
    int ab = calc.sumrealcomplex(o1,o2);
    int bc = calc.sumcomplexpart(o1,o2);
    cout<<endl<<"Doing addition of Vectors "<<endl;

    cout<<"Your Required Answer is :-"<<endl<<ab<<"i + "<<bc<<"j"<<endl;

    return 0;
}
