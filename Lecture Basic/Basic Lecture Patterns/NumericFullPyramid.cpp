#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"ENTER THE NUMBERS OF LINES->";
    cin>>n;


    for (int i=1; i<=n; i++)
    {
        for (int j=1;j<=n;j++)
        {

            if(j<=i){
               cout<<i+j-1;
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;

        
    }
    


    return 0;
}