#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

bool smp(char a,char b){    
    return a>b;
}

bool cmp(int a,int b){
    return a<b;
}
int main(){

    // string s;
    // getline(cin,s);

    // sort(s.begin(),s.end(),smp);
    // cout<<s;

    vector<int>v1={5,4,3,2,1};
    sort(v1.begin(),v1.end(),cmp);

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    

    return 0;
}