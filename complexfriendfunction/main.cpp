#include <iostream>

using namespace std;
class c2;

class c1{
int data;
friend void exchange(c1 & , c2 &);
public:
    void setvalue(int a){
    data = a;
    }
    void display(void){
    cout<<"value of c1 is "<<data<<endl;
    }
};
class c2{
int num;
friend void exchange(c1 & , c2 &);
public:
    void setvalue(int b){
    num = b;
    }
    void display(void){
    cout<<"the value of c2 is "<<num<<endl;
    }
};
void exchange(c1 &x , c2 &y){
    int temp = x.data;
    x.data= y.num;
    y.num = temp;
}


int main()
{
    c1 oval1;
     c2 oval2;
    oval1.setvalue(54);
    oval1.display();

    oval2.setvalue(67);
    oval2.display();
    exchange(oval1 , oval2);
    cout<<"the numbers are been exchanged ....."<<endl;
    cout<<"the value of c1 after exchanging is ";
    oval1.display();
    cout<<"the value of c2 after exchanging is ";
    oval2.display();

    return 0;
}
