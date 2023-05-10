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

int BinarySearch(int *ptr,int n,int key){

    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if(ptr[mid]==key){
            return mid;
        }
        if(ptr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=(start+end)/2;
    }

    return -1;
    
}

int main(){

    int n;
    cout<<"ENTER THE SIZE OF AN ARRAY->";
    cin>>n;

    int arr[n];

    EnterArray(arr,n);
    cout<<endl;
    PrintArray(arr,n);

    int key;
    cout<<"ENTER YOUR SEARCH KEY->";
    cin>>key;
    int ans=BinarySearch(arr,n,key);

    if(ans==-1){
        cout<<"ELEMENT IS NOT PRSENT AT ALL";
    }
    else{
        cout<<"ELEMET IS PRESENT AT "<<ans<<" Index"; 
    }

    return 0;
}