#include<iostream>
using namespace std;
int main(){
    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb && sideb==sidec){
        cout<<"Equilateral Triangle...\n";
    }else if(sidea==sideb || sideb==sidec || sidea==sidec){
        cout<<"Isocsclus Triangle...\n";
    }else{
        cout<<"Scelen Triangle..\n";
    }
    return 0;
}