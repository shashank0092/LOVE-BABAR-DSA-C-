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

int LastOccurence(int *ptr,int n,int key){

    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start<=end)
    {
        if(ptr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(ptr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }

        mid=(start+end)/2;
    }
    

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
    
    int ans=LastOccurence(arr,n,key);
    cout<<ans;

   

    return 0;
}