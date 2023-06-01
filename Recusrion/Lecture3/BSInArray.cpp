#include <iostream>
using namespace std;

int BinarySearch(int arr[],int s,int e,int key){

    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]>key){
        return BinarySearch(arr,s,mid-1,key);
    }

    else{
        return BinarySearch(arr,mid+1,e,key);
    }


}

int main(){

    int n=5;
    int arr[n]={10,20,30,40,50};
    int key=300; 
    int s=0;
    int e=n-1;

    int ans=BinarySearch(arr,s,e,key);
    cout<<ans;
    return 0;
}