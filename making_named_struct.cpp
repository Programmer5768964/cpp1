#include<iostream>
#include<string>
using namespace std;
//make named structure to use it as a variable to store the datas
//we write struct keyword after that a structure name followed by curly braces above the main body

struct car{
    string brand;
    string model;
    int year;
};
int main(){
    car mycar1;
    mycar1.brand="BMW";
    mycar1.model="X9";
    mycar1.year=1999;
    car mycar2;
    mycar2.brand="Ford";
    mycar2.model="Ford";
    mycar2.year=2000;
    cout<<"Car_1 Detail:\n";
    cout<<mycar1.brand<<"\n";
    cout<<mycar1.model<<"\n";
    cout<<mycar1.year<<"\n"<<endl;
    cout<<"Car_2 Detail:\n";
    cout<<mycar2.brand<<"\n";
    cout<<mycar2.model<<"\n";
    cout<<mycar2.year<<"\n";



}