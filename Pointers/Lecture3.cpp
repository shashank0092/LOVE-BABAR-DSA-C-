#include <iostream>
using namespace std;

// void utill(int *p){
//     p=p+1;
// }

int* data(){
    int a=5;
    int* ptr=&a;
    return ptr;
}

int main(){

    // int a=5;
    // int *p=&a;
    // int **q=&p;

    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;

    // int a=5;

    // int *p=&a;

    // cout<<"BEFORE FUNCTION CALL->"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // utill(p);
    // cout<<"AFTER FUNCTION CALL->"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    int a=5;
    int &b=a;
    cout<<b;
    b++;
    cout<<b;
    return 0;
}