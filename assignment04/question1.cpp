/*
write prg scan array 
calculate the sum of digits of each position and replace
number with sum of digits of ans
*/

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n], newArr[n];

    cout<<"Enter "<<n<<" elements:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    // Calculate sum of digits
    for(int i=0; i<n; i++)
    {
        int num = arr[i];
        int sum = 0;

        while(num != 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }

        newArr[i] = sum;
    }

    cout<<"\nNew Array:\n";
    for(int i=0; i<n; i++)
    {
        cout<<newArr[i]<<" ";
    }

    return 0;
}