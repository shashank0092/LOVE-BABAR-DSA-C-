#include <iostream>
using namespace std;

char findGrade(int marks){

    if(marks<=40){
        return 'F';
    }

    else if(marks<=60){
        return 'p';
    }

    else if(marks<=80){
        return 'A';
    }
    else{
        return 'O';
    }

}

int main(){

    char grade=findGrade(80);
    cout<<grade;


    return 0;
}