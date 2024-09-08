#include <iostream>

using namespace std;

int main()
{

    // Squre Pattern       (1234,1234,1234,1234)

    // int n = 4;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;

    // }

    // star        (****,****,****,****)

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // character     (ABCD,ABCD,ABCD,ABCD)

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

    // squre     (123,456,789)

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

    // Triangle      (*
    //                **
    //                ***
    //                ****)                        )

    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
            
        }
        cout << endl;
    }

    return 0;
}
