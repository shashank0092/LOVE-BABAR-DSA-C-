#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector <int> arr={1,3,4,2,2};

    // int ans=-1;

    // for(int i=0;i<arr.size();i++){
    //     int index=abs(arr[i]);
    //     if(arr[index]<0){
    //         ans=index;
    //         break;
    //     }
    //     else{
    //         arr[index]*=-1;
    //     }
    // }

    // cout<<ans;
   
   while (arr[0]!=arr[arr[0]])
   {
        swap(arr[0],arr[arr[0]]);
   }
   

    cout<<arr[0];
    return 0;
}