#include<iostream>
// #include<string>
using namespace std;
int main(){
    char c;
    int isLowercaseVowel ,isUppercaseVowel;
    cin>>c;
    isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    
    if(isLowercaseVowel||isUppercaseVowel){
        cout<<c<<" Is a vowel..\n";

    }else{
        cout<<c<<" is a consonant..\n";
        // return 0;
    }
    
}