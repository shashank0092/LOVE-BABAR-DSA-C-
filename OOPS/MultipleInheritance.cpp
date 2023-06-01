#include <iostream>
using namespace std;

class A{
    public:
        int maths;
        int boi=10;
};

class B{
    public:
        int chemistry;
        int boi=20;
};

class C:public A,public B{
    public:
        int physics;
};




int main(){

    C shukla;
    cout<<shukla.physics<<" "<<shukla.chemistry<<" "<<shukla.maths<<" "<<shukla.B::boi<<endl;

    return 0;
}