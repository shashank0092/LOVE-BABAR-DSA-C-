#include <iostream>
using namespace std;

int main(){

    int* arr=new int[5];

    delete[] arr;

    int row=5;
    int col=4;

    int** arr2=new int*[5];
    for(int i=0;i<row;i++){
        arr2[i]=new int[col];
    }

    for(int i=0;i<row;i++){
        delete[] arr2[i];
    }

    delete [] arr2;







    return 0;
}