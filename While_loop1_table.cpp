#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"Enter number n  to get required table: ";
    cin>>n;
    i=1;

    

    // concept of while loop 
    while (i <=10){
        cout<<n<<"X"<<i<<"="<<i*n<<"\n";
        i++;
    }
}