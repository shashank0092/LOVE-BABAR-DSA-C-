#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    char name[50];
    cin.getline(name,50);
    cout<<name<<endl;

    for(int i=0;i<strlen(name);i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }

    cout<<name<<endl;
    
}