#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>::iterator arr,int n){

    for(int i=1;i<n;i++){
        bool swaaped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swaaped=true;
                swap(arr[j],arr[j+1]);
            }
        }


        if(swaaped==true){
            break;
        }
    }
}

int main(){

    int n;
    cout<<"ENTER NUMBERS OF ELEMENT->";
    cin>>n;

    vector<int> arr(n);

    cout<<"ENTER VALUES IN ARRAY->";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"VALUES BEFORE SORTING->";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    vector<int>::iterator it1=arr.begin();

    BubbleSort(it1,n);

    cout<<"Array After Sorting->";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    





    return 0;
}