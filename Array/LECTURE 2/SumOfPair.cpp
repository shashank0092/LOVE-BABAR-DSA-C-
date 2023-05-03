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

void SumPairPrint(vector<int>::iterator it1,int n1,int sum){
    for(int i=0;i<n1;i++){
        for(int j=i+1;j<n1;j++){
            if(it1[i]+it1[j]==sum){
                cout<<"THE PAIR OF SUM IS->"<<"("<<it1[i]<<","<<it1[j]<<")"<<endl;
            }
        }
    }
}

int main(){

    int n1;
    int n2;

    cout<<"ENTER SIZE OF FIRST ARRAY->";
    cin>>n1;



    vector <int> v1(n1);
    

    vector<int>::iterator it1=v1.begin();
    

    cout<<"ENTER VALUE IN  ARRAY->";
    EnterValueInArray(it1,n1);
    
    int sum;
    cout<<"ENTER THE ADDITION OF NUMBERS->";
    cin>>sum;

    SumPairPrint(it1,n1,sum);



  


    
        

    return 0;
}