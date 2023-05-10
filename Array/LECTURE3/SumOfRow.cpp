#include <iostream>
using namespace std;

int main(){

    int row;
    int col;

    cout<<"ENTER THE NUMBER OF ROW->";
    cin>>row;

    cout<<"ENTER THE NUMBER OF COLOUMN->";
    cin>>col;


    int matrix[row][col];

    cout<<"ENTER VALUES IN MATRIX->";
    cout<<endl;


    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
            
        }
       
    }

    for(int i=0;i<row;i++){
        int ans=0;
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
            ans=ans+matrix[i][j];
        }
        cout<<ans;
    }

    
    
    return 0;
}