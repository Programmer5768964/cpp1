#include<iostream>
#include<string>
using namespace std;
//using & operetaor we can hold the references of int values and can swap the avlues
void SwapNum(int &x,int &y){
    int z= x;
    x = y;
    y = z;
}
int main(){
    int first_num=10;
    int second_num=25;


    cout<<"Before swapping\n";
    cout<<first_num<<second_num<<"\n";
    SwapNum(first_num,second_num);
    
    cout<<"After Swapping\n";

    cout<<first_num<<second_num;
    return 0;
}