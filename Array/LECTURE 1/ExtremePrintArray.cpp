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

        int count=0;
        int START=0;
        int END=n-1;
    for(int i=0;i<n;i++){
        

        if(count%2==0){
            cout<<arr[START]<<" ";
            count++;
            START++;
        }
        else{
            cout<<arr[END]<<" ";
            count++;
            END--;
        }
    }
    return 0;
}