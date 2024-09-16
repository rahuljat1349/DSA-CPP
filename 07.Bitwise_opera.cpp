#include <iostream>
using namespace std;

int checkPowerOfTwoWithLoop(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }

    return n == 1;
}
int checkPowerOfTwoWithBits(int n)
{
    return (n & (n - 1)) == 0;
}

//
//
//
//
int ans = 0;
int reverseOfNum(int num){
   while (num>0)
   {
       int rem = num % 10;
       ans = (ans * 10) + rem;
       num /= 10;
   }
   
    return ans;

}

int main()
{

    // Bitwise operators -> & (and), | (or), ^ (xor)

    // Left shift operator -> <<
    // Right shift operator -> >>

    // 8 << 1  means (1000 -> 10000) (binary shifts to the left by 1 place)
    // The ans will be 8*2^1 -> (a*2^b)

    // 8 >> 1  means (1000 -> 100) (binary shifts to the right by 1 place)
    // The ans will be 8/2^1 -> (a/2^b)
//
//
//
//
//
//
//
//

    // To check if number is power of 2...
    //
    // int n = 66;
    // cout << checkPowerOfTwoWithLoop(n) << endl;
    // cout << checkPowerOfTwoWithBits(n) << endl;
//
    // Reverse a number
    //
    int num = 125;
    cout << reverseOfNum(num) << endl;

    return 0;
}