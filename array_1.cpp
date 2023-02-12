// How to define an array 
// (type of value you want to store in it),(name of the array),(no of value you want to store in it) 
// we use curly braces to hold the values in array and put the values seperated by comma 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name[5]={"Sujeet","Sumit","Shirish","Shakil","Utkarsh"};
    name[0]="Shakil";
    cout<<name[0];
    return 0;
}