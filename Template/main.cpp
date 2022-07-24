#include <iostream>
#include <cstring>

using namespace std;

template <class T>
class vector {

public:
    T *arr;
    int size;


    vector(int m){
        size = m;

        arr = new T[size];
    }

    T dotproduct(vector &v){
        T d = 0;
        for(int i=0 ; i<size ; i++){

            d += this->arr[i] * v.arr[i];
        }
        return d;
    }


};

int main()
{

    vector <float> v1(3);

    v1.arr[0] = 2.2;
    v1.arr[1] = 3.2;
    v1.arr[2] = 4.2;

    vector <float> v2(3);

    v2.arr[0] = 1.3;
    v2.arr[1] = 2.3;
    v2.arr[2] = 3.3;

    float Pro = v1.dotproduct(v2);
    cout<<"The dot Product is = "<<Pro<<endl;

    return 0;
}
