/*7.scan array and replace all odd number with 1
*/

#include<iostream>
using namespace std;

void odd(int arr[]){
    for(int i=0;i<5;i++){
        if(arr[i]%2!=0){
            
            arr[i]=1;
            
        }
    }
}

main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"\nEnter Values in Array";
        cin>>arr[i];
    }

    
    odd(arr);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}