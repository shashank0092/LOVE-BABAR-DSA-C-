#include <iostream>
using namespace std;

int LinearSearch(int *ptr,int n,int key){

    for (int i = 0; i < n; i++)
    {
        if(ptr[i]==key){
            return i;
        }
        
    }

    return -1;
    
}

int main(){

    int arr[100];

    int n;
    cout<<"ENTER SIZE OF AN ARRAY->";
    cin>>n;

    if(n>100){
        cout<<"ENTER VALUE LESS THAN 100";
    }
    else{

        cout<<"ENTER VALUES IN ARRAY->";
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }
        
        cout<<"VALUES ENTERED IN ARRAY->";

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;

        int key;
        cout<<"ENTER A VALUE THAT YOU WANT TO SEARCH->";
        cin>>key;

        int ans=LinearSearch(arr,n,key);
        
        if(ans==-1){
            cout<<"VALUE IS NOT IN ARRAY";
        }
        else{
            cout<<"VALUE IS PRESENT IN ARRAY AT INDEX->"<<ans+1;
        }


    }


    return 0;
}