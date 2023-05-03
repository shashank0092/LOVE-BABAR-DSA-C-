#include <iostream>
using namespace std;

bool checkPrime(int n){
    bool ans=1;
    if(n==0 || n==1){
        ans=1;
    }

    for(int i=2;i<n/2;i++){
        if(n%i==0){
            ans=0;
            break;
        }
    }
    return ans;

}

int main(){

    int n;
    cout<<"ENTER A NUMBER->";
    cin>>n;

    (checkPrime(n))?(cout<<"THIS IS PRIME NUMBER"):(cout<<"THIS IS NON PRIME NUMER");


    return 0;
}