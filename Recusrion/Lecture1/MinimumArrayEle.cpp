#include <iostream>
using namespace std;

void Min(int arr[],int n,int i,int& min){
    if(i>=n){
        return;
    }

    if(arr[i]<min){
        min=arr[i];
    }

    Min(arr,n,i+1,min);
}

int main(){

    int n=5;
    int arr[5]={10,20,30,40,50};
    int min=INT8_MAX;
    int i=0;

    Min(arr,n,i,min);

    cout<<min;

    return 0;
}