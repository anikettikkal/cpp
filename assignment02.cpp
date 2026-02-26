using namespace std;
#include <iostream>
main()
{
    // 1. write prog which create menu +,-,*,/
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

    // 2. write prog scan number between 0 to 10

    /*
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
    */

    // 3.write a prog which prints odd series from 1 to n and  even series from 2 to n

    /*
    int n, a = 1, b = 2;
    cout << "\nEnter Number";
    cin >> n;
    while (a <= n)
    {
        cout <<endl<<"Odd Numbers"<< a;
        a = a + 2;
    }
    while(b<=n)
    {
        cout<<endl<<"Even Numbers"<<b;
        b=b+2;
    }
    */

    // 4.scan number and print factorial of number like 1*2*3*4

    /*
    int a=1,fact=1,n;
    cout<<"\nEnter Number";
    cin>>n;
    while(a<=n)
    {
        fact=fact*a;
        cout<<a<<"*";
        a++;
    }
    cout<<"\nFactorial of number is "<<fact;
    */

    // 5. write a prog scan value x and y perform x^y

    /*
    int x, y, result = 1;
    cout<<"\nEnter Value of x (base)";
    cin>>x;
    cout<<"\nEnter Value of y (power)";
    cin>>y;

    while(y>0)
    {
        result=result*x;
        y--;
    }
    cout<<"\nResult of x^y is "<<result;
    */

    // 6.write a prog scan 10 numbers and count negative num and calculate sum of positive numbers

    /*
    int a = 1, n, positiveNum = 0, negativeNum = 0;

    while (a <= 10)
    {
        cout << "\nEnter 10 Numbers i.e positive and negative";
        cin >> n;
        if (n > 0)
        {
            cout << "\nPositive Number";
            positiveNum = positiveNum + n;
        }
        else
        {
            negativeNum++;
        }
        a++;
    }
    cout << positiveNum;
    cout << "\nNegative Number Count is " << negativeNum;
    */



    //7.write a loop of programe 1 to 100 and count number divisible by 5 and 7

    /*
    int a=1,countFive=0,countSeven=0,noDivisible=0;
    while(a<=100)
    {
        if(a%5==0)
            countFive++;
        else if(a%7==0)
            countSeven++;
        else
            noDivisible++;
        a++;
    }
    cout<<"\nCount of Number Divisible by 5 is ="<<countFive;
    cout<<"\nCount of Number Divisible by 7 is ="<<countSeven;
    cout<<"\nCount of Number Not Divisible by 5 and 7 is ="<<noDivisible;
    */


    //8.write prog which print all leap year between 1995 to 2025 and count total leap year

    /*
    int year=1995 , leapYearCount=0;
    while(year<=2025)
    {
        if(year%4==0)
        {
            cout<<year<<endl;
            leapYearCount++;
        }
        year++;
    }
    cout<<"\nTotal Count of Leap Year between 1995 to 2025 is ="<<leapYearCount;
    */


    //9.write a prgm which print fibonacci series and count total fibonacci number

    /*
    int a=0,b=1,fibo=1,n,countFibo=0;
    cout<<"\nEnter Number";
    cin>>n;
    cout<<endl<<a;
    cout<<endl<<b;
    while(fibo<=n)
    {
        cout<<endl<<fibo;
        a=b;
        b=fibo;
        fibo=a+b;
        countFibo++;
    }
    cout<<"\nTotal Count of Fibonacci Number is ="<<countFibo;

    */

    //10.Write a Prgm scan number and calculate the sum of digits and print the unit places

    int sum=0,n;
    cout<<"\nEnter Number";
    cin>>n;
    while(n>0)
    {
        sum=sum+ n%10;
        cout<<"\nUnit Place is ="<<n%10;
        n=n/10;
    }
    cout<<"\nSum of Digits is ="<<sum;
}