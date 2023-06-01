#include <iostream>
using namespace std;

int main(){

    string s="azxxzy";

    string ans="";

    int i=0;

    while(s[i]!='\0'){
        if(ans[ans.length()-1]==s[i]){
            ans.pop_back();
            i++;
        }
        else{
            ans.push_back(s[i]);
            i++;
        }
    }

    cout<<ans;


    return 0;
}