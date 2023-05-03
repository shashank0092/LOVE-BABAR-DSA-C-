#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<int> arr;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;


    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

    vector<int> arr2(10);

    cout<<endl;
    cout<<arr2.size()<<" "<<arr2.capacity()<<endl;

    vector<int> arr3(10,-10);
    for (int i = 0; i < arr3.size(); i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    vector<int> arr4{10,20,30,40,50};

    for (int i = 0; i < arr4.size(); i++)
    {
        cout<<arr4[i]<<" ";
    }
    
    cout<<endl;
    cout<<arr4.empty();
    
    
    return 0;
}