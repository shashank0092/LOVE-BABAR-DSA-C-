#include <iostream>
using namespace std;

class Animal{
    public:
        int data;
        int age;

        void eat(){
            cout<<"EATING"<<endl;
        }
};


class Dog:public Animal{

};

int main(){

    Dog d1;
    d1.eat();

    return 0;
}