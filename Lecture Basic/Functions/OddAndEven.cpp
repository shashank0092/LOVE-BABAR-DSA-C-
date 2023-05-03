#include <iostream>
using namespace std;

bool EvenOdd(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){ 

    int n;
    cout<<"ENTER THE NUMBER->";
    cin>>n;

    bool ans=EvenOdd(n);

    (ans==1)?(cout<<"THIS IS EVEN NUMBER"):(cout<<"THIS IS ODD NUMBER");



    return 0;
}