#include <iostream>
using namespace std;

void Max(int arr[],int n,int i,int& maxi){

    if(i>=n){
        return;
    }
    
    if(arr[i]>maxi){
        maxi=arr[i];
    }

    Max(arr,n,i+1,maxi);
}

int main(){

    int n=5;

    int arr[5]={10,20,30,40,50};

    int maxi=INT8_MIN;

    int i=0;
    Max(arr,n,i,maxi);

    cout<<maxi;

    return 0;
}