#include <iostream>

#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){

    int v1[7]={1,5,3,4,3,5,3};

    unordered_map<int,int> hash;

    for(int i=0;i<7;i++){
        hash[v1[i]]++;
    }    
    
    for (int i = 0; i < hash.size(); i++)
    {
        cout<<hash[i]<<" ";
    }
    

    return 0;
}