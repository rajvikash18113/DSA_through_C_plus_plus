#include<iostream>
using namespace std;

int main(){
    cout << "Enter any Number" << endl;
    int a;
    cin >> a;

    if(a>0){
        cout << "Positive" << endl;
    }
    else if (a<0){
        cout << "a is negastive" << endl;
    }
    else{
        cout << "0" << endl;   
    }
}