#include <iostream>
using namespace std;

// ------------ Squre -------------;

void squrePattern()
{
    /*1234
      1234
      1234
      1234*/
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void squreStarPattern()
{
    /*
     ****
     ****
     ****
     ****
     */
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void charSqurePattern()
{
    /*ABCD
      ABCD
      ABCD
      ABCD*/
    for (int i = 0; i < 4; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= 4; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
}

void squreTwoPattern()
{
    /*
      123
      456
      789
    */
    int num = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

// ------------- Triangle --------------;

void trianglePattern()
{

    /*
     *
     **
     ***
     ****
     */
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void numberTriangle()
{
    /*
    1
    22
    333
    4444
    */
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void numberTriangleTwo()
{
    /*
    1
    12
    123
    1234
    */
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void numberTriangleReverse()
{
    /*
    1
    21
    321
    4321
    */
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

// -------------- Floyd's Triangle ---------------;
/*
1
2 3
4 5 6
7 8 9 10
*/
void floydsTriangle()
{
    /*
    1
    21
    321
    4321
    */
    int n = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
}
// ------------- Inverted Triangle ------------------;
/*
1111
 222
  33
   4
*/
void invertedTriangle()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= n - i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
// --------------- Pyramid -------------------;

/*
   1
  121
 12321
1234321
*/

void pyramidPattern()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

// -------------- Diamond --------------;
//      *
//     * *
//    *   *
//   *     *
//    *   *
//     * *
//      *

void diamondPattern(int num)
{
    int n = num;
    // upper part
    for (int i = 0; i < n; i++)
    {
        for (int j = n - (i + 1); j > 0; j--)
        {
            cout << " ";
        }
        cout << "*";

        if (i != 0)
        {
            for (int j = 0; j < i * 2 - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }
    // lower part
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";

        if (i != n - 1)
        {
            for (int j = n - (i * 2 + 2)+1; j > 0; j--)  // logic fix
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    // squrePattern();
    // squreStarPattern();
    // charSqurePattern();
    // squreTwoPattern();
    //
    // trianglePattern();
    // numberTriangle();
    // numberTriangleTwo();
    // numberTriangleReverse();
    // floydsTriangle();
    // invertedTriangle();
    //
    // pyramidPattern();
    diamondPattern(5);
    return 0;
}