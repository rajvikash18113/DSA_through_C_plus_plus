/*Fahrenheit to  °C*/

#include<iostream>
using namespace std;

int main()
{
    int F;
    cout << "Enter number in Fahrenheit to Convert in °C : " ;
    cin >> F;

    int Celcius =  (F - 32) * 5/9;

    cout << "Thr given Farenheit number in Degree Celcius is : " << Celcius <<"°C" << endl;
}