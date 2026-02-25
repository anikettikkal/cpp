using namespace std;
#include <iostream>
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

    // int num;
    // cout<<"Enter number between 1 to 700:";
    // cin>>num;
    // if(num>=1 && num<=400)
    //    cout<<"number between 1 to 400";
    //    else
    //      if(num>=401 && num<=700)
    //         cout<<"number between 401 to 700";
    //         else
    //         cout<<"Number not in 1 to 700";

    /*
    Write a program scan age of person
    print person is minor
    print person is major
    print person is senior citizen
    */

    int age;
    cout<<"\nEnter Age of Person:";
    cin>>age;
    if(age>=0 && age<18)
        cout<<"Person is Minor";
        else 
            if(age>=18 && age<60)
                cout<<"Person is Major";
                else
                    if(age>=60 && age<=100)
                    cout<<"Person is Senior Citizen";
                    else
                    cout<<"Person is outoff age";
                
}