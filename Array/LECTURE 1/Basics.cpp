#include <iostream>
using namespace std;



void printArrayByName(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void printArrayByAddress(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){

    // // int arr1[52];
    // // char arr2[106];
    // // bool arr3[23];

    // // int data[]={2,4,6,8};
    // // int brr[5]={10,20,30,40,50};
    // // int empty[6]={10,20,30};


    // // arr[0]=arr+index*data type size

    // int arrEnter[100];

    // cout<<"ENTER VALUE IN ARRAY->";

    // for(int i=0;i<5;i++){
    //     cin>>arrEnter[i];
    // }

    // cout<<"THE VALUES IN ARRAY->";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arrEnter[i]<<" ";
    // }
    
    // int arr[]={1,3,5,7,9};

    // for(int i=0;i<5;i++){
    //     arr[i]=0;
    // }

    // cout<<endl;

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    // // mesmset

    // int shukla[10]={0};

    // ARRAYS AND FUNCTIONS

    int arr[5]={10,20,30,40,50};

    printArrayByName(arr,5);
    printArrayByAddress(arr,5);
    


    return 0;
}