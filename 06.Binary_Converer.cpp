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

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << decToBin(i) << endl;
    }

    return 0;
}