using namespace std;
#include <iostream>

int main()
{

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

    // int i,j,n;
    // cout<< "\nEnter the Value of n";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<< j<<" ";
    //     }
    //     cout<<"\n";
    // }

    // for(i=n-1; i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         cout<< j<<" ";
    //     }
    //     cout<<"\n";
    // }

    /*
    2.write a prog which print pattern
    1
    2 3
    4 5 6
    7 8 9 10
    */

    // int i, j, n;
    // int num = 1;

    // cout << "Enter value of n: ";
    // cin >> n;

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    /*
    3.write a prgm which print
    A
    B C
    D E F
    G H I J
    */

    // int i,j,n;
    // char ch =65;
    // cout<< "Enter the value of n: ";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<< ch<<" ";
    //         ch++;
    //     }
    //     cout<<"\n";
    // }

    //============================= array prgm start==================

    /*
    4.Write a prgm scan array and calculate odd even number sum seprate
    */

    int a[5],i,n,even_sum=0,odd_sum=0;
    cout<< "Enter n numbers: ";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"a["<<i<<"]"<<" = ";
        cin>>a[i];
        if(a[i]%2==0){
            cout<< a[i]<<" is even number\n";
            even_sum= even_sum + a[i];
        }
        else{
            cout<< a[i]<<" is odd number\n";
            odd_sum= odd_sum + a[i];
        }
    }
    cout<<"sum of even numbers is =" <<even_sum<<endl;
    cout<<"sum of odd numbers is =" <<odd_sum<<endl;

    return 0;
}