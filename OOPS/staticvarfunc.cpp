#include <iostream>
using namespace std;

class abc{

    public:
        static int a;
        static int b;

        void print(){
            cout<<a<<" "<<b;
        }


};

int main(){


    abc a1,a2;
    a1.a=10;
    a1.b=20;

    a1.print();

    return 0;
}