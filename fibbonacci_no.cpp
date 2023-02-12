#include<iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    int j=1;
    int num=0;
    int k=2;
    cout<<"Enter n: ";
    cin>>n;
    while(n>k){
        while(num<=n){
            num=i+j;
            cout<<i<<j<<num;
            i=j;
            
            j=num;
            
            
            num++;

        }
        k++;
        
    }
}