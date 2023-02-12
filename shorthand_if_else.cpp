#include<iostream>
#include<string>
using namespace std;
int main(){
    // short hand if else statment 
    // syntax variable=(condition) ?(expressionTrue):(expressionFalse);
    int time=20;
    int a;
    int b;

    cin>>a;
    cin>>b;

    string result=(time<18) ? "Good Morning...": "Good Evening..";
    string resul_t=(a>20) ?"great! Keep it up: ": "Ok Ok";
    string congret=(b<5) ?"Where are you going": "Don't worry i'll manage";

    cout<<result<<endl;
    cout<<resul_t<<endl;
    cout<<congret;
}