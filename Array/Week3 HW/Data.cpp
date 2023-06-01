#include <iostream>
using namespace std;

int main(){

    string n="raj@521";

    

    if(n.find("@") || n.find("#") || n.find("$") || n.find("&") ){
        cout<<"THERE IS SPACEIL CHARCTER ";
    }
    else{
        cout<<"THERE IS NOT ANY SPACEIL CHARCTER";
    }

    
    

    return 0;
}