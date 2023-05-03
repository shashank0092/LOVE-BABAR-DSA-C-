#include <iostream>
using namespace std;

int FindMax(int a,int b,int c){

    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main(){

    int max=FindMax(5,1,-8);
    cout<<max;


    return 0;
}