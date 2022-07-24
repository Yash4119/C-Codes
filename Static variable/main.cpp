#include <iostream>

using namespace std;

class show{
    int id;
    int static count;
public:
    void setdata(void){
    cout<<"enter the employee id "<<endl;
    cin>>id;
    count++;
    cout<<endl;
    }
    void getdata(void){
    cout<<"The Id of employee dis "<<id<<endl;
    }
    static void getcount(void){
    cout<<"the count is "<<count<<endl;
    count * 100;
    }
};
int show::count;
int main()
{
    show employee , kamgar , majdur ;
    employee.setdata();
    employee.getcount();
     kamgar.setdata();
     kamgar.getcount();
      majdur.setdata();
       majdur.getcount();
    employee.getdata();


    kamgar.getdata();


    majdur.getdata();


    return 0;
}
