#include <iostream>

using namespace std;

class company{
    int id;
    int salary;

public:
    void setdata(){
    cout<<"enter the id of the employee"<<endl;
    cin>>id;
    cout<<endl;

    }
    void getdata(){
    cout<<"the id of the employee is  "<<id<<endl;

    }

};


int main()
{
    int i;
    company cp[5];

    for(i=1;i<=5;i++){
        cp[i].setdata();

    }
    for(i=1;i<=5;i++){
            cout<<i<<"-->";
       cp[i].getdata();

    }
    return 0;
}
