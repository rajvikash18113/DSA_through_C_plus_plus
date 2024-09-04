/*
1 
2 3 
3 4 5 
4 5 6 7
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while(row <= n)
    {
        int col = 1;
        int value = row;
        while(col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// Method 2nd

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;

//     while(row <= n)
//     {
//         int col = 1;
//         while(col <= row)
//         {
//             cout << row + col - 1 << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }




