#include <iostream>
#include <vector>
using namespace std;

int BSinArray(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid+1]==target && mid+1<arr.size() ){
            return mid+1;
        }
        if(arr[mid-1]==target && mid-1>=0 ){
            return mid-1;
        }
        if(arr[mid]>target){
            end=mid-2;
        } 

        if(arr[mid]<target){
            start=mid+2;
        }
        mid=start+(end-start)/2;
    }
    
    return -1;
}

int main(){

    vector<int> arr={10,3,40,20,50,80,70};

    int target=100;
    int ans=BSinArray(arr,target);

    cout<<ans;


    return 0;
}