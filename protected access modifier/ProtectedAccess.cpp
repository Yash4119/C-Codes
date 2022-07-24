#include <iostream>

using namespace std;

class base{
protected:
    int a = 3;
private:
    int b = 3;
public:
    void setdata(){

    int d = a;
    }
    int getdata(){
    return b;
    }
};

class derived : public base{
    public:
display(){
cout<<"Value of a = "<<a<<endl;
cout<<"Value of a = "<<getdata()<<endl;
int sum = a + getdata();
cout<<"Value of sum = "<<sum<<endl;
cout<<"Executed Well..... "<<endl;
}
};

/*
for protected member :
                Public Derivation       Private Derivation         Protected Derivation
   Private   :- Not inherited         Not inherited               Not inherited
   Public    :- Public                Private                     Protected
   Protected :- Protected             Private                     Protected
*/

int main()
{
    derived yash;
    yash.display();


    return 0;
}
