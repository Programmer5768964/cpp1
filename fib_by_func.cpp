#include<iostream>
using namespace std;
void Fib(int n){
    int i=0;
    int j=1;
    
    if(n<0){
        cout<<"Invalid input";

    }else if(n==1){
        cout<<i<<"\n";
    }else if(n==2){
        cout<<j<<"\n";
    }else if(n>2){
        cout<<i<<"\n";
        cout<<j<<"\n";
        for(int k=3; k<=n;k++){
            int sum=i+j;
            i=j;
            j=sum;
            cout<<sum<<"\n";




        }
        
    }
    
}
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    Fib(a);
}