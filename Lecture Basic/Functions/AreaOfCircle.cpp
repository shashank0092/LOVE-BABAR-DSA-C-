#include <iostream>
using namespace std;

int AreaOfCircle(int r){

    return 3.14*r*r;
}


int main(){

    int r;
    cout<<"ENTER THE RADIUS VALUE->";
    cin>>r;

    cout<<AreaOfCircle(r);


}