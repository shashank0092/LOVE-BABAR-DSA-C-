#include <iostream>
using namespace std;

class Animal{

    private:
        int weight;
    public:

    Animal(){
        cout<<"THIS IS CONSTRUCTOR"<<endl;
    }

    Animal(int age){
        cout<<"THIS IS PARAMETRIZED CONSTRUCTOR"<<endl;
    }

    Animal(Animal& b){
        this->age=b.age;
        this->weight=b.weight;

    }

    string name="LION";
    int age=2;

    void setWeight(int w){
        this->weight=w;
    }

    int getWeight(){
        return this->weight;
    }
    void eat(){
        cout<<"EATING"<<endl;
    }

    void sleep(){
        cout<<"SLEEPING"<<endl;
    }

    ~Animal(){
        cout<<"BOI"<<endl;
    }
};

int main(){

    // cout<<"SIZE OF EMPTY CLASS->"<<sizeof(Animal);

    // Animal ramesh;

    // cout<<"RAMESH'S AGE IS->"<<ramesh.age<<endl;
    // cout<<"RAMESH'S NAME IS->"<<ramesh.name<<endl;
    // ramesh.eat();
    // ramesh.sleep();
    // ramesh.setWeight(10);
    // cout<<"THE WEIGHT IS->"<<ramesh.getWeight();

    Animal* Suresh=new Animal(100);
    
    Suresh->age=10;
    Suresh->name="bill";

    cout<<Suresh->age<<endl;
    cout<<Suresh->name<<endl;


    Animal ajay;
    ajay.age=10;

    Animal shukla(ajay);
    cout<<shukla.age<<endl;



}