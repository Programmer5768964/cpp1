#include<iostream>
#include<string>
using namespace std;
int main(){

    
        int n;
    int div=2;
    // int div=2;
    cout<<"Enter n: ";
    cin>>n;
   
         while(div<n){
        if (n%div==0){
            cout<<"Not prime\n";
            

        }else{
            div++;
        }

    }
    cout<<"Prime\n";
    
    
}

