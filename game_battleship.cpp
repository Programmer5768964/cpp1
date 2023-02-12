#include<iostream>
using namespace std;
int main(){
    bool ships[4][4]={
        {0,1,1,0},
        {0,0,0,0},
        {0,0,1,0},
        {0,0,1,0},
    };
    int hits=0;
    int numberofturns=0;
    while(hits<4){
        int row,column;
        cout<<"Selecting the coordinates \n\n";
        cout<<"Choose a row number between 0 to 3 \n\n";
        cin>>row;
        cout<<"Chooose a column number between 0 to 3 \n\n";
        cin>>column;
        if (ships[row][column]){
            ships[row][column]=0;
            hits++;
            cout<<"Hit!\n\n";
        }else{
            cout<<"Miss!\n\n";
        }
        numberofturns++;
    }
    cout<<"Victory!\n";
    cout<<"You won in"<<numberofturns<<"Turns";
    return 0;
}