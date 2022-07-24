#include <iostream>

using namespace std;

class myarray{
private:
    int total_size;
    int used_size;
    int *ptr;
public:
    void setvalue(myarray *a , int tsize , int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = NULL;
    ptr = new int(tsize * sizeof(int));
    }
    void show(myarray *a){
        for(int i=1 ; i<=used_size ; i++){
            cout<<(a->ptr)[i]<<endl;
        }
    }
    void setval(myarray *a){
        int n;
        for(int i=1 ; i<=used_size ; i++){
            cout<<"Enter the value of element "<<i<<endl;
            cin>> n;
            (a->ptr)[i] = n;

        }
        cout<<"set val ended"<<endl;
    }
};


int main()
{
    int m,n;
    cout<<"enter the total size of array"<<endl;
    cin>>m;
    cout<<"enter the size of array that you are going to use"<<endl;
    cin>>n;
    class myarray marks;
    marks.setvalue(&marks , m , n);
    cout<<"running setval funciton"<<endl;
    marks.setval(&marks);
    cout<<"running show val function"<<endl;
    marks.show(&marks);

    return 0;
}
