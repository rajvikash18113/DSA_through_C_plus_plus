// Sum of all Even Number sfrom 0 to N

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any Number : " ;
    cin >> n;
    int i = 2;
    int sum = 0;

    while(i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
        cout << "Sum of all even Numbers from 0 to Given Number is : " << sum << endl;
}