// five operators 
// 1 assignment 
// 2. relational operators 
// 3 logical operators 
// 4 comparison 
// 5 Bitwise 
// ------Arithmetic operator 
// + - * /  
// ++ is to increment and -- is for decresing 
// % is for returning remainder 
// ---------Assignment operator
// = += -= *= /= %= &= |= ^= <<= >>= 
// #strings method 
// an additional header file(#include<string>) is written while using string variable 
// We can concatenate strings using + operator as well as append method 
// To get the length of string we use length() or size() function 
// -----Syntax is text.length() 
// we can access string elements using indexing 
// syntax
#include<iostream>
int main(){
    string name="Sujeet";
    std::cout<<name[0]<<endl;
    std::cout<<name[0]='A';
}
// in order to take input string as an input we often take in mind that if we want to print a space seperated strings we have to use getline 

// ex--- syntax
string name;
cout<<"Enter your name: ";
getline(cin,name);
cout<<"Your name is: "<<name;
// ommiting namespace lybrary 
// we ignour writting 'using namespace std' and write only std with :: operator with strings and cout 
syntax
#include<iostream>
#include<string>
int main(){
    std::string greeting='Hello';
    std::cout<<greeting;
    return 0;

}
// max function in math module will provide max number
// in the same way min will provide minimum of two numbers 
// some maths functions 
// abs(x)	Returns the absolute value of x
// acos(x)	Returns the arccosine of x
// asin(x)	Returns the arcsine of x
// atan(x)	Returns the arctangent of x
// cbrt(x)	Returns the cube root of x
// ceil(x)	Returns the value of x rounded up to its nearest integer
// cos(x)	Returns the cosine of x
// cosh(x)	Returns the hyperbolic cosine of x
// exp(x)	Returns the value of Ex
// expm1(x)	Returns ex -1
// fabs(x)	Returns the absolute value of a floating x
// fdim(x, y)	Returns the positive difference between x and y
// floor(x)	Returns the value of x rounded down to its nearest integer
// hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
// fma(x, y, z)	Returns x*y+z without losing precision
// fmax(x, y)	Returns the highest value of a floating x and y
// fmin(x, y)	Returns the lowest value of a floating x and y
// fmod(x, y)	Returns the floating point remainder of x/y
// pow(x, y)	Returns the value of x to the power of y
// sin(x)	Returns the sine of x (x is in radians)
// sinh(x)	Returns the hyperbolic sine of a double value
// tan(x)	Returns the tangent of an angle
// tanh(x)	Returns the hyperbolic tangent of a double value
