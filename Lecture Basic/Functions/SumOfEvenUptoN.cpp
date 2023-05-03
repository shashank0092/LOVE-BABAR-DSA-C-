#include <iostream>
using namespace std;

int SumEven(int n){

    int sum=0;

    for (int i = 1; i <=n; i++)
    {
        if(i%2==0){
            sum=sum+i;
        }
    }

    return sum;
    
}

int main(){

    int n;
    cout<<"ENTER NUMBER->";
    cin>>n;

    cout<<SumEven(10);

    return 0;

}