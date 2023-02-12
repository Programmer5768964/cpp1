#include<iostream>
using namespace std;
void myFunc(string fname){
    cout<<fname<<" sharma\n";
}
void Input(int value){//for checking odd Even
    if(value%2==0){
        cout<<value<<" is even:\n";
    }else{
        cout<<value<<" is odd:\n";
    }


    
}

int main(){
    int n;
    // string arr1[3]= {'NIET','Amity','G.L. Bajaj'} ;
    myFunc("Sujeet");
    cout<<"Enter n: ";
    cin>>n;
    Input(n);
}
