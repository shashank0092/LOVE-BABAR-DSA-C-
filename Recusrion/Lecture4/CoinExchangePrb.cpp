#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>&arr,int target){
    if(target==0){
        return 0;
    }

    if(target<0){
        return -1;
    }

    int mini=INT8_MAX;

    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,target-arr[i]);
        if(ans!=INT8_MAX){
            mini=min(mini,ans+1);
        }
    }
}

int main(){

    vector<int>v1={1,2};
    int target=5;

    int ans=solve(v1,target);
    cout<<ans;


    return 0;
}