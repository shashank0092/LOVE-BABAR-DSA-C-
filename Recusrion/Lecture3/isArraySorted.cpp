#include <iostream>
using namespace std;

bool isSorted(int arr[],int n,int index){

    if(index==n-1){
        return true;
    }
    if(arr[index+1]<arr[index]){
        return false;
    }
    else{
        return isSorted(arr,n,index+1);
    }
}

int main(){

    int n=5;
    int arr[5]={10,20,30,40,50};

    int index=0;
    bool ans=isSorted(arr,n,index);

    cout<<ans;


    return 0;
}