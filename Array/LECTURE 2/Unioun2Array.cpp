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

void UniounArray(vector<int>::iterator it1,vector<int>::iterator it2,vector<int>::iterator it3,int n1,int n2){

    int count1=n1;
    int i=0;

    
    while (count1!=0)
    {

        it3[i]=it1[i];
        count1--;
        i++;
    }

    int count2=n2;
    int k=0;
    int j=i;

    while (count2!=0)
    {
        it3[j]=it2[k];
        j++;
        k++;
        count2--;
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

    int n3=n1+n2;

    vector<int> v3(n3);
    vector<int>::iterator it3=v3.begin();
    UniounArray(it1,it2,it3,n1,n2);
    cout<<"Unioun Array->";
    PrintArray(it3,n3);
        

    return 0;
}