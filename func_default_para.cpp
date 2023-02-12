#include<iostream>
#include<string>
using namespace std;
void City(string city="Azamgarh"){
    cout<<"Your City: "<<city<<"\n";

}
int main(){
    City();
    City("Norway");
    City("Las Vegas");
    City("Cape Town");
    return 0;

}