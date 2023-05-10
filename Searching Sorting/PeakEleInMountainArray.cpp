#include <iostream>
using namespace std;


void EnterArray(int *ptr,int n){

    cout<<"ENTER VALUES IN ARRAY->";
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
}

void PrintArray(int *ptr,int n){

    cout<<"VALUES INSIDE ARRAY->";
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}

int PeakEle(int *ptr,int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while (start<end)
    {
        if(ptr[mid]<ptr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}

int main(){

    int n;
    cout<<"ENTER THE SIZE OF AN ARRAY->";
    cin>>n;

    int arr[n];

    EnterArray(arr,n);
    cout<<endl;
    PrintArray(arr,n);

   

    return 0;
}