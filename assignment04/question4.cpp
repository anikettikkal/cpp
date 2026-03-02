/*4. enter string and replace all empty space with @*/

#include<iostream>
using namespace std;
main(){
    char str[40];
    cout<<"Enter a string: ";
    gets(str);

    for(int i=0;i<40;i++){
        if(str[i]==' '){
            str[i]='@';
        }
    }
    cout<<"Modified string: "<<str<<endl;
}