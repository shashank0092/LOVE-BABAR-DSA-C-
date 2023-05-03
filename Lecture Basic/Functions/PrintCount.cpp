#include <iostream>
using namespace std;

void printNum(int n){

    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

int main(){

    int n;
    cout<<"ENTER NUMBER N->";
    cin>>n;

    printNum(n);



    return 0;
}