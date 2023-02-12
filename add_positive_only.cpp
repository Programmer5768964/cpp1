#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cin>>num;
    while(num>=0){
        sum+=num;
        
        cin>>num;
    }
    
cout<<"sum is: "<<sum;
return 0;
    

}