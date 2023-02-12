#include<iostream>
using namespace std;
int Add(int x=10,int y=45){
    return x+y;

}
string Dtl(string name="sujeet", string surname=" sharma"){
    return name+surname;
}
int main(){
    cout<<Add(69,78)<<"\n";
    cout<<Add()<<"\n";
    cout<<Dtl("Sumit"," Pathak")<<"\n";
    cout<<Dtl("Shirish"," Chaurasaiya")<<"\n";
    cout<<Dtl()<<"\n";
}
//If the function has a return vale 
//we will use int string or the data type at the place of void
