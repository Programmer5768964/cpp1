#include<iostream>
#include<string>
using namespace std;
int main(){
    struct{
        string brand;
        string model;
        int year;
    }car1,car2;
    car1.brand="BMW";
    car1.model="X5";
    car2.brand="Ford";
    car2.model="Mustung";
    car1.year=1999;
    car2.year=2000;
    cout<<"car_1 Details:\n";
    cout<<car1.brand<<"\n";
    cout<<car1.model<<"\n";
    cout<<car1.year<<"\n"<<endl;
     cout<<"car_2 Details:\n";
    cout<<car2.brand<<"\n";
    cout<<car2.model<<"\n";
    cout<<car2.year<<"\n";
}