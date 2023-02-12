#include<iostream>
#include<string>
using namespace std;
int main(){
    // switch keyword will allow to execute one of the block of many block of code 
    // default keyword will executed when no match will be found by the compiler 
    int day=8;
    switch (day){
        case 1:
        cout<<"Monday";
        break;
    
        case 2:
        cout<<"Tuesday";
        break;
    
        case 3:
        cout<<"Wednesday";
        break;
    
        case 4:
        cout<<"Thursday";
        break;
    
        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"Looking forward to the weekend";

   
    }
}