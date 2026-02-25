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

    // int age;
    // cout<<"\nEnter Age of Person:";
    // cin>>age;
    // if(age>=0 && age<18)
    //     cout<<"Person is Minor";
    //     else
    //         if(age>=18 && age<60)
    //             cout<<"Person is Major";
    //             else
    //                 if(age>=60 && age<=100)
    //                 cout<<"Person is Senior Citizen";
    //                 else
    //                 cout<<"Person is outoff age";

    /*
    Write program which print bill
    product name rate and quantity
    calculate amount
    calculate discount if amount >5000
    then give  discount  10% on amount
    other
    give discount 5% on amount
    calculate net amount
    */

    char product_name[20];
    float rate, amount;
    int quantity;
    cout << "\nEnter Product Name:";
    cin >> product_name;
    cout << "\nEnter Rate of Product:";
    cin >> rate;
    cout << "\nEnter Quantity of Product:";
    cin >> quantity;

    amount = rate * quantity;
    if (amount > 5000)
    {
        amount = amount - (amount * 10 / 100);
        cout << "\nAmount after 10% discount: " << amount;
    }
    else
    {
        amount = amount - (amount * 5 / 100);
        cout << "\nAmount after 5% discount: " << amount;
    }
}