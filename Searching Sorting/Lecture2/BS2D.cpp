#include <iostream>
using namespace std;

bool search(int arr[5][4],int m,int n,int key){

    int s=0;
    int e=m*n-1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        int rowIndex=mid/n;
        int colIndex=mid%n;

        if(arr[rowIndex][colIndex]==key){
            return true;
        }
        else if(arr[rowIndex][colIndex]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }

    return false;
    
}

int main(){

    int arr[5][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20},
        
    };

    int key=229;

    bool ans=search(arr,5,4,key);
    cout<<ans;
    return 0;
}