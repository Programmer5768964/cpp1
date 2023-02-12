#include<iostream>
#include<string>
using namespace std;
int main(){
    
    //Pointers are the variables to store the memory addres of other variables
    //syntax is given below
    string food="Burger";
    string* ptr= &food;// ptr is pointer variable
    cout<<ptr<<"\n";//This prints memory address
    cout<<*ptr<<"\n"; //This will print value of that memory addres
    



}