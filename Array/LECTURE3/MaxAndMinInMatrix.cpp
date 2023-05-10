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


    int max=INT8_MIN;
    int min=INT8_MAX;
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j<col; j++)
        {
            if(matrix[i][j]>max){
                max=matrix[i][j];
            }

            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
        }
        cout<<endl;
    }

    cout<<"MAXIMUM VALUE IN MATRIX->"<<max<<endl;
    cout<<"MINIMUM VALUE IN MATRIX->"<<min;
    
    return 0;
}