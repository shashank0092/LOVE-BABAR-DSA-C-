#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    char name[50];

    cin.getline(name,10);

    int count=0;
    int i=0;
    while (name[i]!='\0')
    {
        count++;
        i++;
    }

    cout<<"LENGTH IS->"<<count;
    cout<<strlen(name); 
      

    return 0;
}