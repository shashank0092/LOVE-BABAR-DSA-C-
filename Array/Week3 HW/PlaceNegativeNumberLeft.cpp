#include <iostream>
#include <algorithm>
using namespace std;

void PlaceNegative(int *ptr,int n){
    // DUtch National Flag Method
    int l=0;
    int h=n-1;

    while (l<h)
    {
        if(ptr[l]<0){
            l++;
        }
        else if(ptr[h]>0){
            h--;
        }

        else{
            swap(ptr[l],ptr[h]);
        }
    }
    
}

int main(){

    int a[]={1,2,-3,4,5,-6};
    int n=sizeof(a)/sizeof(a[0]);
    PlaceNegative(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    


    return 0;
}
