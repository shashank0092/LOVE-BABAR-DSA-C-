#include <iostream>
using namespace std;

class A{
    private:
        A(){

        }
    public:

        void Print(){
            cout<<"THIS IS SHUKLA BOI"<<endl;
        }
    friend class shukla;
};

class shukla{

    public:
    void boi(){
        A a;
        a.Print();
        
    }
};

int main(){



    shukla s1;
    s1.boi();


    return 0;
}