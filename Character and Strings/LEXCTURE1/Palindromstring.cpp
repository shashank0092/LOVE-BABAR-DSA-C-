#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    char name[50];

    cin.getline(name,10);
    cout<<name;

    int i=0;
    int j=strlen(name)-1;
    bool palindrome=true;

    while (i<=j)
    {
        if(name[i]!=name[j]){
            palindrome=false;
            break;

        }
        else{
            i++;
            j--;
        }
    }
    
    cout<<palindrome;
    return 0;
}