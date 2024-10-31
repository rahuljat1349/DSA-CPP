#include <iostream>
#include <vector>
using namespace std;

//
//

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Brute force

int primeCount(int start, int end)
{

    int count = 0;
    for (int i = start; i <= end; i++)
    {
        if (i < 2)
        {
            continue;
        }
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if ((i % j) == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            count++;
        }
    }
    return count;
}

//
//
//
///  Sieve of eratosthenes -> to find a count of prime numbers in a range
//
//
//
int primeCount2(int n)
{

    vector<bool> Primes(n + 1, true);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (Primes[i])
        {
            count++;
            for (int j = i * 2; j < n; j += i)
            {
                Primes[j] = false;
            }
        }
    }
    return count;
}
//
//

//
//
void printDigits(int n)
{
    int count = 0;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        cout << digit << " ";
        count++;
        sum += digit;
        n /= 10;
    }
    cout << endl;
    cout << "Total is " << count << endl;
    cout << "Sum is " << sum << endl;
}
//
//
//
//
int main()
{
    // Prime numbers from 2 to n
    // int n = 42;
    // cout << isPrime(43) << endl;
    //
    //

    // Prime numbers from a to b
    // int start = 2, end = 30;
    // cout << primeCount2( end) << endl;

    // Print all digits in a number

    int n = 2546;
    printDigits(n);
    // Or
    // cout << (int) (log10(n) + 1) << endl;

    // Armstrong Number
    // armstrong number is a number that is equal to the sum of cubes of it's digits. -> 153 = 1^3 + 5^3 + 3^3

    return 0;
}