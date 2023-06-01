#include <iostream>
using namespace std;
#define MAX 10;

class abc{
    int x;
    int *y;
    int z;

    public:
        // abc(){
        //     x=0;
        //     y=new int(0);
        // }

        abc(int _x,int _y,int _z=0):x(_x),y(new int (_y)),z(_z){}
        int getX() const {
            // x=50;
            return x;
        }

        void setX(int _value){
            x=_value;
        }

        int getY(){
            return *y;
        }

        void setY(int _value){
            *y=_value;
        }

};

int main(){

    // const int a=5;

    // const int *a=new int(5);
    // *a=30;

    // int *const a=new int(2);
    // *a=20;

    // const int *const a=new int(20);




    return 0;
}