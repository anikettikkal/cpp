using namespace std;
#include<iostream>
main()
{
// Write a program scan year and print year is leap or Not.
    // int year;
    // cout<<"Enter Year:";
    // cin>>year;
    // if(year%4==0)
    // cout<<"year is leap year";
    //     else
    //     cout<<"year is not leap year";

/*
Write a program scan number between 1 to 700
and print
number between 1 to 400
number between 401 to 700
Number not in 1 to 700
*/

    int num;
    cout<<"Enter number between 1 to 700:";
    cin>>num;
    if(num>=1 && num<=400)
       cout<<"number between 1 to 400";
       else
         if(num>=401 && num<=700)
            cout<<"number between 401 to 700";
            else
            cout<<"Number not in 1 to 700";
}