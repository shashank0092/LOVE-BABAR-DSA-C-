#include <iostream>
#include <vector>
using namespace std;

int FinduniqueElement(vector<int> arr){

    int ans=0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans=ans^arr[i];
    }
    
    return ans;
}

int main(){

    int n;
    cout<<"ENTER THE NUMBERS OF ELEMENT IN ARRAY->";
    cin>>n;


    vector <int> arr(n);

    cout<<"ENTER ELEMENTS IN ARRAY->";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
    int uniqueElement=FinduniqueElement(arr);
    cout<<"Unique Element Is->"<<uniqueElement;

    


    return 0;
}