#include<iostream>

using namespace std;

class student{
protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r)
{
   roll_number = r;
}

void student :: get_roll_number(){

cout<<"your roll number is = "<<roll_number<<endl;
}

class exam : public student{
protected:
    float maths;
    float physics;

public:
    void set_marks(float , float);
    void get_marks(void);
};

void exam :: set_marks(float m1 , float m2 ){
 maths = m1;
 physics = m2;
}

void exam :: get_marks(){
cout<<"Marks obtained in maths = "<<maths<<endl;
cout<<"Marks obtained in physics = "<<physics<<endl;
}

class results : public exam{
private:
    float percentage;
public:
    void display(void);
};

void results :: display(){
    get_roll_number();
    get_marks();
cout<<"Your Percentage is = "<<(maths+physics)/2<<endl;
}

int main(){

results yash;

yash.set_roll_number(8);
yash.set_marks(45 , 48);
yash.display();
cout<<endl;
cout<<"program Executed Well";


return 0;
}
