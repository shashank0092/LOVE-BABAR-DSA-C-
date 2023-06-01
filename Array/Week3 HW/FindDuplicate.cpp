#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int FindMissingEle(vector<int> v1){
//       for(int i=0;i<v1.size();i++){
//         int j=abs(v1[i])-1;
//         if(v1[j]>0){
//             v1[j]*=-1;
//         }
//     }

//     int ans;
//     for(int i=0;i<v1.size();i++){
//         if(v1[i]>0){
//             ans=i;
//         }
//     } 
//     return ans;
// }

int FindMissingEle(vector<int> v1){
    sort(v1.begin(),v1.end());

    for(int i=0;i<v1.size();i++){
        if(v1[i]!=i+1){
            return i;
        }
    }
}

int main()
{   
    
    int n;
    cout<<"ENTER SIZE OF ARRAY->";
    cin>>n;


    vector <int> v1(n);

    cout<<"ENTER VALUES IN ARRAY->";

    for(int i=0;i<v1.size();i++){
        cin>>v1[i];
    }

    
    int ans=FindMissingEle(v1);
    // if(ans>0){
    //     cout<<"MISSING ELE IS->"<<ans+1<<endl;
    // }
    // else{
    //     cout<<"THERE IS NOT MISSING ELE";
    // }

     if(ans>0){
        cout<<"MISSING ELE IS->"<<ans+1;
    }
    else{
        cout<<"THERE IS NOT MISSING ELE";
    }
    

    return 0;
}