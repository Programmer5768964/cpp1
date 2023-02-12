#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year to ckeck leap year: ";
    cin>>year;
    if(year%400==0){
        cout<<"Leap Year\n";



    }else if(year%100==0){
        cout<<"Not A leap Year\n";
        
    }else if(year%4==0){
        cout<<"Leap Year\n";
    

    }else{
        cout<<"Not A Leap Year\n";
    
    }
    return 0;
}