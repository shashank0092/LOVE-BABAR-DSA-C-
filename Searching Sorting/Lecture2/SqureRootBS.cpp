#include <iostream>
#include <vector>
using namespace std;

int findSqrt(int n){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while (s<=e)
    {
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid>n){
            e=mid-1;
        }

        else{
            ans=mid;
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    
    return ans;

}

int main(){

    int n;
    cin>>n;

    int ans=findSqrt(n);
    cout<<ans;



    return 0;
}