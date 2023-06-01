#include <iostream>
using namespace std;

class Animal{

    public:
    virtual void speak(){
        cout<<"Speaking"<<endl;
    }
};



class Dog:public Animal{

    public:
    void speak(){
        cout<<"Barking"<<endl;
    }    
};

int main(){

    // Animal* a=new Animal();
    // a->speak();

    // Dog* a=new Dog();
    // a->speak();

    // upcasting
    // Animal* a=new Dog();
    // a->speak();

    // downcasting
    Dog* d=(Dog*)new Animal();
    d->speak();

    return 0;
}