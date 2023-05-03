#include <iostream>
using namespace std;

int main(){

    int row;
    int col;

    cout<<"ENTER NUMBERS OF ROWS->";
    cin>>row;
    cout<<"ENTER NUMBERS OF COLOUMN->";
    cin>>col;


    for (int i = 1; i <= row; i++)
    {
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }

        cout<<endl;

    }
    


    return 0;
}