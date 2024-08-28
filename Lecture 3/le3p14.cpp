// To Check the Number is Prime or Not

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter any to Check it is Prime or Not : " << endl;
    cin >> n;
    
    int i = 2;

    while (i < n)
    {
        if(n % i == 0)
        {
            cout << "Not Prime for : " << i << endl;
        }
        else
        {
            cout << "Prime for : " << i << endl;
        }
        i = i + 1;

    }
        
       
}  