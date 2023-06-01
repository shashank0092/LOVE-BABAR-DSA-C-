#include <iostream>
#include <vector>
using namespace std;

void SelcetionSort(vector<int>::iterator arr,int n){

    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        swap(arr[i],arr[minIndex]);
    }
}

int main(){

    int n;
    cout<<"ENTER NUMBERS OF ELEMENT->";
    cin>>n;

    vector<int> arr(n);

    cout<<"ENTER VALUES IN VECTOR->";

    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    cout<<"VALUES BEFORE SORTING->";

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    vector<int>::iterator it1=arr.begin();
    SelcetionSort(it1,n);

    cout<<endl;
    
    cout<<"VALUES AFTER SORTING->";

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}