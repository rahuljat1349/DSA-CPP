#include <iostream>

using namespace std;

int main()
{

    // Squre Pattern        1234
    //                      1234
    //                      1234
    //                      1234

    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;

    // }
    //
    //
    //
    //
    //
    //
    //
    //

    // star         ****
    //              ****
    //              ****
    //              ****

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    //

    // character      ABCD
    //                ABCD
    //                ABCD
    //                ABCD

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch += 1;

    //     }

    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    //

    // squre      123
    //            456
    //            789

    // int n = 3;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //

    // Triangle       *
    //                **
    //                ***
    //                ****

    // int n = 6;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //

    // Triangle       1
    //                22
    //                333
    //                4444

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << i+1;
    //     }
    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Triangle       1
    //                12
    //                123
    //                1234

    // int n = 4;

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 1; j < i+1; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Triangle       1
    //                21
    //                321
    //                4321

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j > 0 ; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Floyd's Triangle       1
    //                        2 3
    //                        4 5 6
    //                        7 8 9 10

    // int n = 4;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Inverted Triangle  1111
    //                     222
    //                      33
    //                       4

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i ; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << i+1;
    //     }

    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Pyramid           1
    //                  121
    //                 12321
    //                1234321

    // int n = 8;

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j < i+1; j++)
    //     {
    //         cout << j;
    //     }

    //     for (int j = i-1; j > 0; j--)
    //     {
    //         cout << j;
    //     }

    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Diamond           *
    //                  * *
    //                 *   *
    //                *     *
    //                 *   *
    //                  * *
    //                   *

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != 0)
    //     {
    //         for (int j = 0; j < i * 2 - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // for (int i = 1; i <= (n - 1); i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != n - 1)
    //     {
    //         for (int j = 0; j < ((n - 1 - i ) * 2) - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Butterfly Pattern
    //                             *      *
    //                             **    **
    //                             ***  ***
    //                             ********
    //                             ********
    //                             ***  ***
    //                             **    **
    //                             *      *
    //
    int n = 4;

    // upper part
    for (int i = 0; i < n; i++)
    {
        // triangle

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        // spaces

        for (int j = 0; j < (n - i - 1) * 2; j++)
        {
            cout << "  ";
        }

        // triangle
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    // lower part

    for (int i = n; i > 0; i--)
    {
        // triangle
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }

        // spaces

        for (int j = 0; j < (n - i) * 2; j++)
        {
            cout << "  ";
        }

        // triangle
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
