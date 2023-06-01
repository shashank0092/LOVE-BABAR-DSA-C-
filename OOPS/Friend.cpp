#include <iostream>
using namespace std;

class A{

    private:
        int x=10;
    public:

        int y=20;

        void data(){
            cout<<"THIS IS DATA FUNCTION"<<endl;
        }

        friend class B;
        friend void shuklaBoi(A& a);
};

class B{
    public:

        void print(A& a){
            cout<<a.x<<endl;
        }
};

void shuklaBoi(A& a){
    cout<<a.x<<endl;
}

int main(){

    A s1;
    B s2;
    s2.print(s1);

    shuklaBoi(s1);

    return 0;
}