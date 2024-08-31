// To Check th egiven character is Uppercase or lowercase or a Number

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any chacacter : ";
    cin  >> ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase" << endl;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase" << endl;
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout << "Number" << endl;
    }
    else
    {
        cout <<"Neither Uppercase, Lowercase nor Character" ;
    }

}