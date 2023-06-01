#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    char name[50];

    cin.getline(name,10);

    int size=strlen(name);

    for(int i=0;i<size;i++){
        name[i]=name[i]+'a'-'A';
    }

    cout<<name;


    return 0;
}