/*
5. write a prog for addition,substraction,multiplication,division of two numbers
*/

#include<iostream>
using namespace std;

void add(int x, int y){
    cout<<"Addition: "<<x+y<<endl;
}

void sub(int x, int y){
    cout<<"Subtraction: "<<x-y<<endl;
}

void mul(int x, int y){
    cout<<"Multiplication: "<<x*y<<endl;
}

void divi(int x, int y){
    cout<<"Division: "<<x/y<<endl;
}

main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    add(a,b);
    sub(a,b);
    mul(a,b);
    divi(a,b);
}