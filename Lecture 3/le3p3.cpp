#include<iostream>
using namespace std;

int main (){
    cout << "Enter the value of A " << endl;
    int a;
    cin >> a;
    cout << "Enter the value of B" << endl;
    int b;
    cin >> b;

    if(a>b){
        cout << "A is greater" << endl;

    }
    if(b>a){
        cout << "B is greater" << endl;
    }
}