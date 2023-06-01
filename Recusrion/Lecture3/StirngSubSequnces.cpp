#include <iostream>
using namespace std;

void PrintSubSequnce(string str,string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

    // exclude
    PrintSubSequnce(str,output,i+1);

    // include

    output.push_back(str[i]);
    PrintSubSequnce(str,output,i+1);



}

int main(){

    string name="abc";
    string output="";
    int i=0;
    PrintSubSequnce(name,output,i);
    return 0;
}