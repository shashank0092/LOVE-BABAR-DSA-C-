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

    cout<<endl;
    cout<<"VALUES IN SIDE TRANSPOSE MATRIX->";
    cout<<endl;

    int TransPoseMatrix[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            TransPoseMatrix[i][j]=matrix[j][i];
            cout<<TransPoseMatrix[i][j]<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}