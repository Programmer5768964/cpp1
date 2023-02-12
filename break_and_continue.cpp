// break and continue is used for break an iteration and to jump another value skipping that value mentioned at that place in condition 
// example----
#include<iostream>
using namespace std;
int main(){
    for (int i= 0; i<10; i++){
        cout<<i<<"\n";
        if (i==4){
            break;
        }
    }
}