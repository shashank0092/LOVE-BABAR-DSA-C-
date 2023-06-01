#include <iostream>
using namespace std;

int solve(int dividend,int divisor){
    int start=0;
    int end=abs(dividend);
    int mid=start+(dividend-start)/2;
    int ans;

    while (start<=end)
    {
        if(abs(mid*divisor)==dividend){
            return mid;
        }
        if(abs(mid*divisor)>=dividend){
            end=mid-1;
        }
        if(abs(mid*divisor)<=dividend){
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }

    if((divisor<0 && dividend<0)||(divisor>0 && dividend>0)){
        return ans;
    }
    else{
        return -ans;
    }
    
    



}

int main(){

    int dividend=22;
    int divisor=-7;

    int ans=solve(dividend,divisor);
    cout<<ans;


    return 0;
}