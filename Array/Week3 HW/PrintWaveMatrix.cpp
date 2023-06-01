#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <vector<int>> v1={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int m=v1.size();
    int n=v1[0].size();

    for(int startCol=0;startCol<n;startCol++){
        if((startCol & 1)==0){
            for(int i=0;i<m;i++){
                cout<<v1[i][startCol]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<v1[i][startCol]<<" ";
            }
        }
    }


    return 0;
}