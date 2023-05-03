#include <iostream>
using namespace std;


int main(){

    int arr[100];

    cout<<"ENTER SIZE OF ARRAY->";
    int n;
    cin>>n;

    cout<<"ENTER VALUES IN ARRAY->";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"VALUES IN ARRAY->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"MAXIMUM VALUE IN ARRAY->";

    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;

    return 0;
}