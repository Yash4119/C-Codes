#include <iostream>

using namespace std;

class student {
protected :
    int rollno;
public:
    void set_rollno(int rl){
    rollno = rl;
    }
    void get_rollno(void){
    cout<<"your roll number is : "<<rollno<<endl;
    }
};
class marks : virtual public student{
protected:
    float maths;
    float physics;
public:
    void set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
    }
    void get_marks(void){
    cout<<"Your marks in maths is "<<maths <<endl;
    cout<<"Your marks in Physics is "<<physics <<endl;
    }
};

    class score : virtual public student{
protected:
    int score;
public:
    void set_score(int s1){
    score = s1;
    }
    void get_score(void){
    cout<<"Your Score is "<<score<<endl;
    }
};
class result : public marks , public score{
protected:
     float total;
public :
    void display(void){
    total  = maths + physics + score;
    get_rollno();
    get_marks();
    get_score();
    cout<<"Your Total marks is "<<total<<endl;
    }
};
int main(){

result r1;
r1.set_rollno(8);
r1.set_marks(48.5 , 45.0);
r1.set_score(47);

r1.display();

return 0;
}
