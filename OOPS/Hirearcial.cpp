#include <iostream>
using namespace std;

class A{

    public:
        int dataOfA=10;

};

class B:public A{
    
};

class C:public A{

};

int main(){

    B boi1;
    C boi2;

    cout<<boi1.dataOfA<<endl;
    cout<<boi2.dataOfA<<endl;

    return 0;
}