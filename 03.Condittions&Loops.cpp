#include <iostream>

using namespace std;

int main()
{
    // If Else
    // ternary

    // Loops
    // for,  while,  do while

    // Prime no.
    // int n = 11;
    // bool isPrime = true;
    // for (int i = 2; i * i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime)
    // {
    //     cout << "Prime No.";
    // }
    // else
    // {
    //     cout << "Non Prime No.";
    // }

    // Nested loops

    // Star printing
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        int m = 10;

        for (int j = 1; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
 
    return 0;
}
