#include<iostream>
using namespace std;
 
 int main() {
    int a = 4;

    int b = 6;

    int ab = a + b;

    float f = 7.9;

    double d = 2.897;

    char c = 'f';


    cout << ab <<endl;
    cout << f<<endl;
    cout << d <<endl;
    cout << c <<endl;
    int size_a = sizeof(a);
    int size_f = sizeof(f);
    int size_d = sizeof(d);
    int size_c = sizeof(c);

    cout << "Size of a is : " << size_a << endl;
    cout << "Size of f is : " << size_f << endl; 
    cout << "Size of d is : " << size_d << endl;
    cout << "Size od c is : " << size_c << endl;

    

 }
