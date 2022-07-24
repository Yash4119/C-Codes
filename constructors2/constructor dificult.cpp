#include <iostream>

using namespace std;

class bankdeposit{
int principal;
int years;
float interestrate;
int returnvalue ;


public:
    bankdeposit(){}
    bankdeposit(int p , int y , float R);
    bankdeposit(int p , int y , int P);
    void show();
};
bankdeposit :: bankdeposit(int p, int y, float R){

principal = p;
years = y;
interestrate = R;
returnvalue = principal;
for(int i=0;i<y;i++){
    returnvalue = returnvalue * (1 + interestrate);
}
}
bankdeposit :: bankdeposit(int p, int y, int P){

principal = p;
years = y;
interestrate = (float (P)/100);
returnvalue = principal;
for(int i=0;i<y;i++){
     returnvalue = returnvalue * (1 + interestrate);
}
}
void bankdeposit :: show(){

cout<<"The amount deposited by you is "<<principal<<"/-"<<endl;
cout<<"The amount you would recieve after "<<years<<" years is "<<returnvalue<<endl;
}

int main()
{
    bankdeposit d1 , d2,d3;



    int p, y, P;
    float R;
    cout<<"Enter the values of p , y , R respectively"<<endl;
    cin >> p>>y>>R;

    d1 = bankdeposit(p,y,R);
    d1.show();

    cout<<"Enter the values of p , y , R respectively"<<endl;
    cin >> p>>y>>P;

    d2 = bankdeposit(p,y,P);
    d2.show();
    return 0;
}
