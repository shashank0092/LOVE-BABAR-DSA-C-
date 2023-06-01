#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector<int> v1={10,20,30,40,50,60};


    if(binary_search(v1.begin(),v1.end(),60)){
        cout<<"FIND IT";
    }
    else{
        cout<<"NOT FOUND IT";
    }


    return 0;
}