#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"ENTER THE NUMBERS OF LINE->";
    cin>>n;

    for (int i=n; i>=1; i--)
    {
        for (int j = 0; j <i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    

    return 0;
}