#include <iostream>
using namespace std;

class abc{
    int x;
    int *y;
    public:
        
        abc(int _X,int _Y){
            x=_X;
            *y=_Y;
        }

        void print(){
            cout<<"value of x is->"<<x<<endl;
            cout<<"value of pointer y is->"<<y<<endl;
            cout<<"value of y is->"<<*y<<endl;

        }
};


int main(){

    abc s(10,20);
    s.print();

    return 0;
}