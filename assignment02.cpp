using namespace std;
#include<iostream>
main()
{
    //1. write prog which create menu +,-,*,/
    /*
    char ch,choice;
    cout<<"\nChoice Operator +,-,*,/";
    cout<<"\nEnter operator";
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<"Addition";
        break;
        case '-':
        cout<<"Substraction";
        break;
        case '*':
        cout<<"Multiplication";
        break;
        case '/':
        cout<<"Division";
        break;
        default:
        cout<<"Invalid Operator";
    }
    cout<<"\nEnd main Programe";
    */


    //2. write prog scan number between 0 to 10

    int number,choice;
    cout<<"\nEnter Choice number Between 0 to 10";
    cout<<"\nEnter Number";
    cin>>number;
    switch(number)
    {
        case 1:
            cout<<"ONE";
            break;
        case 2:
            cout<<"TWO";
            break;
        case 3:
            cout<<"THREE";
            break;
        case 4:
            cout<<"FOUR";
            break;
        case 5:
            cout<<"FIVE";
            break;
        case 6:
            cout<<"SIX";
            break;
        case 7:
            cout<<"SEVEN";
            break;
        case 8:
            cout<<"EIGHT";
            break;
        case 9:
            cout<<"NINE";
            break;
        case 10:
            cout<<"TEN";
            break;
        default:
            cout<<"Invalid Number";
    }
}