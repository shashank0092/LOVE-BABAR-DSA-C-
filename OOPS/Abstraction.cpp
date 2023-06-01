#include <iostream>
using namespace std;

class boi{
    public:
        virtual void print()=0;

};

class shuklaboi:public boi{

    public:
    void print(){
        cout<<"SHUKLA BOI IS PRINTING"<<endl;
    }
};

int main(){

    shuklaboi s1;
    s1.print();

    return 0;
}