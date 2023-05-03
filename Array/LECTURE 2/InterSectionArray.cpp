#include <iostream>
#include <vector>
using namespace std;

void EnterValueInArray(vector<int>::iterator it,int n){

   
    
    for (int  i = 0; i < n; i++)
    {
        cin>>it[i];   
    }
    
}

void PrintArray(vector<int>::iterator it,int n){
    
    for(int i=0;i<n;i++){
        cout<<it[i]<<" ";
    }

    cout<<endl;
}

void InterSectionArry(vector<int>::iterator it1,vector<int>::iterator it2,vector<int>::iterator it3,int n1,int n2){

    int k=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(it1[i]==it2[j]){
                it3[k]=it1[i];
                k++;
            }
        }
    }
}



int main(){

    int n1;
    int n2;

    cout<<"ENTER SIZE OF FIRST ARRAY->";
    cin>>n1;

    cout<<"ENTER SIZE OF SECOND ARRAY->";
    cin>>n2;

    vector <int> v1(n1);
    vector <int> v2(n2);

    vector<int>::iterator it1=v1.begin();
    vector<int>::iterator it2=v2.begin();

    cout<<"ENTER VALUE IN FIRST ARRAY->";
    EnterValueInArray(it1,n1);
    
    cout<<"ENTER VALUE IN SECOND ARRAY->";
    EnterValueInArray(it2,n2);
    
    cout<<"VALUES IN FIRST ARRAY->";
    PrintArray(it1,n1);

    cout<<"VALUES IN SECOND ARRAY->";
    PrintArray(it2,n2);

   

    vector<int> v3(5);
    vector<int>::iterator it3=v3.begin();
    InterSectionArry(it1,it2,it3,n1,n2);
    int n3=v3.size();
    cout<<"INTERSECTION OF TWO ARRAYS->";
    PrintArray(it3,v3.size());
        

    return 0;
}