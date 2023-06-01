#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    char arr[50];

    cin.getline(arr,10);

    
    int i=0;
    int j=strlen(arr)-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<arr;

    

    return 0;
}