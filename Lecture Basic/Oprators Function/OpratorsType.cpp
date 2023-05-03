#include <iostream>
using namespace std;


int main(){

    int a=1;
    int b=0;

    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // // cout<<(~a)<<endl;
    // cout<<~(a)<<endl;
    // // cout<<(~b)<<endl;
    // cout<<~(b)<<endl;
    // cout<<(a^b)<<endl;


    int value=10;

    int LeftShift=value<<1;
    cout<<LeftShift<<endl;


    int value2=20;

    int RightShift=value2>>1;
    cout<<RightShift<<endl;

    int data=10;


    switch (data)
    {
    case 10:
        cout<<"SHUKLA";
        break;
    case 11:
        cout<<"BOI";
        break;
    
    default:
        cout<<"ABE GANDU";
        break;
    }

    return 0;
}