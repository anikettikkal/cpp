/*
write prog scan number and print number prime or not
*/

#include<iostream>
using namespace std;

void prime(int x){
    if(x<=1){
        cout<< x<<" is not a prime number\n";
        return;
    }
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            cout<< x<<" is not a prime number\n";
            return;
        }
    }
    cout<< x<<" is a prime number\n";
}

main(){
    int a;
    cout<<"\nEnter Number";
    cin>>a;

    prime(a);
    
}