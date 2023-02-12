//Function overlaoding in which multiple Function with same name but with different parameters
#include<iostream>
using namespace std;
int addNum(int x, int y){
    return x+y;
}
double addNum(double x=7.55, double y=9.14){
    return x+y;
}
int main(){
    cout<<"Sum of int type: "<<addNum(8,9)<<"\n";
    // cout<<"Sum of int type: "<<addNum()<<"\n";
    cout<<"Sum of Double type: "<<addNum(5.78,9.68)<<"\n";
    // cout<<"Sum of int type: "<<addNum()<<"\n";
    
}
