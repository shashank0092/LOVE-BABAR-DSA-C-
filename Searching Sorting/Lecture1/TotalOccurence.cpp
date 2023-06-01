#include <iostream>
#include <vector>
#include <algorithm>
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


int main(){

    int n;
    cout<<"ENTER NUMBER OF ELEMENTS->";
    cin>>n;

    vector<int>v1(n);

    cout<<"ENTER VALUES IN ARRAY->";
    for (int i = 0; i <v1.size(); i++)
    {
        cin>>v1[i];
    }

    cout<<endl;
    cout<<"VALUES IN ARRAY->";

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    cout<<"ENTER SERCH VALUE->";
    int key;
    cin>>key;
    
    vector <int>::iterator it1=upper_bound(v1.begin(),v1.end(),key);
    vector <int>::iterator it2=upper_bound(v1.begin(),v1.end(),key);

    

    
    



    return 0;
}