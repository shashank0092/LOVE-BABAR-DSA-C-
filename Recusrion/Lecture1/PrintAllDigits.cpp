#include <iostream>
using namespace std;

void PrintDigit(int n){
    if(n<=0){
        return;
    }

    PrintDigit(n/10);
    int digit=n%10;
    cout<<digit<<" ";



}

int main(){

    int n=678;
    PrintDigit(n);

    return 0;
}