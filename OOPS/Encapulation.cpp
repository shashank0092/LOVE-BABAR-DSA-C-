#include <iostream>
using namespace std;

class Animal{

    private:
        int age;
        int wieght;
    public:
        void eat(){
            cout<<"Eeating..."<<endl;
        }

        int getAge(){
            return this->age;
        }

        void setAge(int age){
            this->age=age;
        }
};

int main(){

    Animal dog;


    return 0;
}