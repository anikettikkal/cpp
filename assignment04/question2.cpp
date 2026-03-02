/*2.scan array 
scan number and count how many times number is found in array
*/
#include<iostream>
using namespace std;
main(){
    int arr[5],i;
    for(i=0;i<5;i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }

    int num,count=0;
    cout<<"Enter a number to search: ";
    cin>>num;

    for(i=0;i<5;i++){
        if(num==arr[i]){
            count++;
        }
        cout<<arr[i]<<endl;
    }

    cout<<"Number of times "<<num<<" is found in the array: "<<count<<endl;
}