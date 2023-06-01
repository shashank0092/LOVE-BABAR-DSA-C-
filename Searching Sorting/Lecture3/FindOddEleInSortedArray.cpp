#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(start==end){
            return start;
        }

        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                start=mid+2;
            }
            else{
                end=mid;
            }
        }

        else{
            if(arr[mid]==arr[mid-1]){
                start=mid+1;
            }
            else{   
                end=mid-1;
            }
        }

        mid=start+(end-start)/2;
    }

    return -1;
    

}

int main(){

    vector<int>arr={1,1,2,2,3,34,4,3,600,600,4,4};

    int ans=solve(arr);
    cout<<ans;

    return 0;
}