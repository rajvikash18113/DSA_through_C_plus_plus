#include<iostream>
using namespace std;

int main (){
    int a;
    cout << "Enter any Number : " << endl;
    cin >> a;

    if(a>0){
        cout << "Given number is Positive" <<endl;;
        }
    else{
        if(a<0){
            cout << "Given number is Negative" << endl;
        }
        else{
            cout << "Given number is 0" << endl;
        }
    }


}