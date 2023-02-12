#include<iostream>
#include<string>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    do{
        cout<<i*n<<"\n";
        i++;
    }
    while(i<=10);
}