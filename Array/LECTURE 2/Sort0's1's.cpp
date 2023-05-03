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

void Sort(vector<int>::iterator it,int n){
    int start=0;
    int end=n-1;
    int i=0;
   while (start<=end)
   {
        if(it[i]==0){
            swap(it[start],it[i]);
            i++;
            start++;
        }
        else{
            swap(it[end],it[i]);
            end--;
        }
   }
   
}

int main(){

    int n1;
   

    cout<<"ENTER SIZE OF FIRST ARRAY->";
    cin>>n1;



    vector <int> v1(n1);
    

    vector<int>::iterator it1=v1.begin();
    

    cout<<"ENTER VALUE IN  ARRAY->";
    EnterValueInArray(it1,n1);
    
    Sort(it1,n1);
    PrintArray(it1,n1);

    return 0;
}