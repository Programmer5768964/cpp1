#include<iostream>
#include<string>
using namespace std;
// This is how we declare multiple structure using a variable 

int main(){
    struct{
        int num;
        string str;
        bool b;
    }myStruct1, myStruct2,myStruct3;
    // assigning of the values to three different structures
    myStruct1.num=5;
    myStruct2.num=10;
    myStruct3.num=15;
    myStruct1.b=true;
    myStruct2.b=false;
    myStruct3.b=true;
    myStruct1.str="Hello guys";
    myStruct2.str="Hello World";
    myStruct3.str="Hello People";
    cout<<myStruct1.num<<"\n";
    cout<<myStruct2.num<<"\n";
    cout<<myStruct3.num<<"\n";
    cout<<myStruct1.b<<"\n";
    cout<<myStruct2.b<<"\n";
    cout<<myStruct3.b<<"\n";
    cout<<myStruct1.str<<"\n";
    cout<<myStruct2.str<<"\n";
    cout<<myStruct3.str<<"\n";



}