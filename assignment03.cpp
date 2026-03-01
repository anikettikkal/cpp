using namespace std;
#include<iostream>

int main(){

    /*
    1.write a prog which print pattern
    1
    1 2 
    1 2 3
    1 2 3 4
    1 2 3
    1 2
    1
    */
   
    int i,j,n;
    cout<< "\nEnter the Value of n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<< j<<" ";
        }
        cout<<"\n";
    }

    for(i=n-1; i>=1;i--){
        for(j=1;j<=i;j++){
            cout<< j<<" ";
        }
        cout<<"\n";
    }

    
    return 0;
}