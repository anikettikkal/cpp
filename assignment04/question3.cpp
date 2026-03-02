/*3.enter string and replace one character 
with another and also find count how many times the char replace*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    char oldChar, newChar;
    int count = 0;

    cout<<"Enter a string: ";
    getline(cin, str);

    cout<<"Enter character to replace: ";
    cin>>oldChar;

    cout<<"Enter new character: ";
    cin>>newChar;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == oldChar)
        {
            str[i] = newChar;
            count++;
        }
    }

    cout<<"\nUpdated String: "<<str;
    cout<<"\nTotal Replacements: "<<count;

    return 0;
}