#include <iostream>

using namespace std;

int toget(int kept,const float factor=1.5){

return kept*factor;

}

int main(){

int money;
cout<<"enter amount to deposit"<<endl;
cin>>money;
cout<<"you deposited = "<<money<<"rs\n you will get  "<<toget(money)<<"rs  after 1 year of deposition "<<endl;


return 0;
}
