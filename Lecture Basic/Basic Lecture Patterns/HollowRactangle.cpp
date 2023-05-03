#include <iostream>
using namespace std;

int main(){

    int row;
    int col;

    cout<<"ENTER NUMBERS OF ROWS->";
    cin>>row;

    cout<<"ENTER NUMBERS OF COLOUMNS->";
    cin>>col;


    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1){
                cout<<"*";
            }

            else if(i==row){
                cout<<"*";
            }

            else if(j==1){
                cout<<"*";
            }
            else if(j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }

    return 0;
}