#include<iostream>
using namespace std;
int main(){
    while (true){
        int a,b,c;
    cout<<"Enter a \n";
    cin>>a;
     cout<<"Enter b \n";
    cin>>b;
     cout<<"Enter c \n";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"A i greatest\n";
        }else{
            cout<<"C is greatest\n";

        }
    
}   else{
    if(b>c){
        cout<<"B is greatest\n";
    }else{
        cout<<"C is greatest\n";
    }
}
    }
}