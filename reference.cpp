#include<iostream>
using namespace std;
int main(){
    //by adding & operator to a variable it stores the reference of a data already defined in the code
    string food="Pizza";
    string &meal=food;
    cout<<&food<<"\n";//This will print memory address of food variablepo
    cout<<food<<"\n";
    cout<<meal<<"\n";
}