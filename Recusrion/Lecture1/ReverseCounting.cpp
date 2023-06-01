#include <iostream>
using namespace std;

void PrintCounting(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" ";
        PrintCounting(n-1);
    }
}

int main(){

    int n;
    cin>>n;

    PrintCounting(n);

    return 0;
}