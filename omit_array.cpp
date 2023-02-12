#include<iostream>
#include<string>
using namespace std;
int main(){
    string name[]={"Sujeet","Ankit","Ashish"};
    name[3]="Utkarsh";
    cout<<name[3]<<endl;

    cout<<sizeof(name)<<endl;
    cout<<name->length();
    // cout<<name[4];
}
// To get the size of an array use sizeof method 
