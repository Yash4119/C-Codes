#include <iostream>

using namespace std;

class complex;

class calculator{

public:
    int add(int a , int b){
    return (a+b);
    }
    int sumrealcomplex(complex o1 , complex o2);
    int sumcomplexpart(complex o1 , complex o2);

};
class complex{

int a ,b ;

friend class calculator;
public:
    void setnumber(int n1 , int n2){

        a = n1;
        b = n2;

        }
    void printnumber(){
    cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator :: sumrealcomplex(complex o1 , complex o2){

return(o1.a+o2.a);

}
int calculator :: sumcomplexpart(complex o1 , complex o2 ){

return (o1.b + o2.b);
}

int main()
{
   complex o1 , o2;
   o1.setnumber(2,5);
   o2.setnumber(4,7);
   o1.printnumber();
   o2.printnumber();
   calculator calc;
   int result = calc.sumrealcomplex(o1,o2);
   cout<<"the sum of real part of o1 and o2 is "<<result<<endl;
   int nextresult = calc.sumcomplexpart(o1 , o2);
   cout<<"the sum of complex part of numbers given by you  is  "<<nextresult<<endl;
    return 0;
}
