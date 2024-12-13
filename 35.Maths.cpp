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
bool isArmstrong(int n)
{
    int sum = 0;
    int num = n;
    while (num > 0)
    {
        int dig = num % 10;
        sum += (dig * dig * dig);
        num /= 10;
    }

    if (sum == n)
        return true;

    return false;
}
//
//
//
//
int findHCF(int a, int b)
{
    int hcf = 0;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (b == a)
        return a;

    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
//
//
int findGCD(int a, int b)
{
    int gcd = 0;
    while (a > 0 && b > 0)
    {
        if (a > b)  // a -= b;
            a %= b; // more efficient

        if (a < b)
            b %= a;
    }
    if (a == 0)
        return b;

    return a;
}

// GCD with recursion
int gcdRec(int a, int b)
{
    if (b == 0)
        return a;
    return gcdRec(b, a % b);
}
// LCM

int lcm(int a, int b)
{
    return (a * b) / gcdRec(a, b);
}
//
//
//

int reverseOfNum(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if( ans > __INT_MAX__ /10 || ans < __WINT_MIN__/10){
            return 0;
        }
        ans = (ans * 10) + rem;
        n /= 10;
    }
    return ans;
}
//
///
//
//
//
// Palindrom number
bool checkIfPalindrom(int n)
{

return (n == reverseOfNum(n) && n > 0);
}
//
//
//
//  Modulo Arithmatics ->
//
//
//
int main()
{
    // Prime numbers from 2 to n
    // int n = 42;
    // cout << isPrime(43) << endl;
    //

    // Prime numbers from a to b
    // int start = 2, end = 30;
    // cout << primeCount2( end) << endl;

    // Print all digits in a number

    // int n = 2546;
    // printDigits(n);
    // Or
    // cout << (int) (log10(n) + 1) << endl;

    // Armstrong Number
    // armstrong number is a number that is equal to the sum of cubes of it's digits. -> 153 = 1^3 + 5^3 + 3^3

    // cout << isArmstrong(153) << endl;

    //
    // G C D / H C F
    int a = 20, b = 28;
    // cout << findHCF(a, b) << endl;
    // Euclid's algorithm to find hcf ->

    // cout << findGCD(a, b) << endl;
    // cout << gcdRec(a, b) << endl;

    // LCM  -> since a*b = lcm(a,b)*hcf(a,b) => lcm(a,b) = a*b/hcf(a,b)
    // cout << lcm(a, b) << endl;

    // Reverse of a number
    int n = 125;
    // cout << reverseOfNum(n) << endl;

    // Palindrom number ->

    // cout << checkIfPalindrom(535) << endl;

    // Modulo Arithmatics ->


    return 0;
}