#include <iostream>

using namespace std;

int decToBin(int num)
{
    int ans = 0;
    int pow = 1;

    while (num > 0)
    {
        int rem = num % 2;
        num /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int binToDec(int num)
{
    int ans = 0;
    int pow = 1;

    while (num > 0)
    {
        int rem = num % 10;
        num /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main()
{

    cout << decToBin(0.5) << endl;

    return 0;
}