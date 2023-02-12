//pass the arrays to a function as a parameter
//we can print the whole array by using loop
#include<iostream>
using namespace std;
void Myarray(int arr[5]){
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    int arr[5]={50,60,40,10,70};
    Myarray(arr);
    return 0;



}