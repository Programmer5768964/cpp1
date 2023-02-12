#include<iostream>
using namespace std;

void myFunc();//Function declaration above main body
int main(){
    myFunc();//Function calling inside main
}
void myFunc(){//Function definition below the main
    cout<<"I'm outta here!..";
}