#include<iostream>
using namespace std;
int main(){
    int n;
    // int i=1;
    int sum=1;
    
    
    cout<<"Enter n to calculate factorial: ";
    cin>>n;
    for(int fact=1; fact<=n;fact++){
        sum*=fact;
        
    }
    cout<<"Your fact is: "<<sum;
    }
    
    


