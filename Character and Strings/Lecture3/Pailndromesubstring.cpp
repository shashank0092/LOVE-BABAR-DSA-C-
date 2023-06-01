#include <iostream>
using namespace std;

int main(){

    string data="noon";

    int n=data.size();
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<data.substr(i,j)<<" ";
        }
        cout<<endl;

    }

    cout<<data.substr(3,1);
    return 0;
}