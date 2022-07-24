#include <iostream>

using namespace std;

class rmc{
    int truckid[100];
    int truckmargin[100];
    int counter;

public:
    void dailycarry(void);
    void monthlycomission(void);
    void initcounter(void){counter=0;}

};
void rmc :: dailycarry(void){

    cout<<"enter truckid  of truck number "<<counter<<endl;
    cin>>truckid[counter];
    cout<<"enter truck margin"<<endl;
    cin>>truckmargin[counter];
    counter++;

}
void rmc :: monthlycomission(void){

cout<<"Your monthly rental amount is"<<endl;
for(int i=0;i<counter;i++){
    cout<<"your truck id is "<<truckid[i]<<" and is commission is "<<truckmargin[i]<<endl;
}
}


int main()
{
    int amount;
   rmc buisness;
   buisness.initcounter();
   buisness.dailycarry();
    buisness.dailycarry();
     buisness.dailycarry();
      buisness.dailycarry();
       buisness.dailycarry();
   buisness.monthlycomission();

   cout<<"the amount is "<<amount<<endl;
    return 0;
}
