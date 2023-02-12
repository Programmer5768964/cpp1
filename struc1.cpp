#include<iostream>
#include<string>
using namespace std;
// in structure we can add multiple types of datas 
// structure in cpp re like list and tuples in python 
// use struct keyword followed by curly braces define all its members inside the curly braces 
// after closing curly braces write name of structure as mentioned bellow
int main(){
    struct{
        int mynum;
        string mystring;
    } myStructure;
    myStructure.mynum=1;
    myStructure.mystring="Hello S.J.";
    cout<<myStructure.mystring<<"\n";
    cout<<myStructure.mynum<<"\n";
    return 0;
}