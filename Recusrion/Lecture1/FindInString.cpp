#include <iostream>
using namespace std;

bool FindInString(string s,char key,int i,bool& ans){
    if(i>=s.length()){
        return 0;
    }

    if(s[i]==key){
        return ans=true;
    }

    ans=FindInString(s,key,i+1,ans);
    return ans;


}

int main(){

    string s="shukla boi";
    char key='j';
    int i=0;
    bool ans=0;

    FindInString(s,key,i,ans);

    cout<<ans;



    return 0;
}