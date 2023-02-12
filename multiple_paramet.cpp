#include<iostream>
#include<string>
using namespace std;
void Std_info(string name="Sujeet", int age=20){
    cout<<"Std name: "<<name<<"\n";
    cout<<"Std Age: "<<age<<"\n\n";
}
int main(){
    Std_info("sumit",18);
    Std_info("shirish",19);
    Std_info();
    return 0;
}