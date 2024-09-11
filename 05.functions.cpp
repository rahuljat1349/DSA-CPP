#include <iostream>
using namespace std;

// void printHello()
// {
//     cout << "Hello" << endl;
// }

// int sumOfN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }

//     return sum;
// }
//
//
//
//
//
//
//
//  Sum of Digits of a Number

// int digitSum(int num)
// {
//     int sum = 0;
//     while (num > 0)
//     {
//         int lastDigit = num % 10;
//         num /= 10;

//         sum += lastDigit;
//     }

//     return sum;
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
int factorial(int n)
{
    int fact = 1;
    for (int j = 1; j <= n; j++)
    {
        fact *= j;
    }
  
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nMr = factorial(n - r);

    return fact_n / (fact_r * fact_nMr);
}

int main()
{

    cout << nCr(8,2) << endl;

    return 0;
}