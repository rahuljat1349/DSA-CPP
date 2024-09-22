#include <iostream>
#include <vector>
using namespace std;

double calcExopo(int x, int n)
{

    // Edge cases
    if (n == 0)
        return 1.0;
    if (x == 1)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binForm = n;

    // Ede cases
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1;

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

    return ans;
}

int main()
{

    double x = 2;
    double n = 10;

    // cout << calcExopo(x, n) << endl;

    // BUY AND SELL STOCK

    vector<int> arr = {7, 1, 5, 5, 6, 4};

    int maxProfit = 0;
    int bestBuy = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > bestBuy)
        {
            maxProfit = max(maxProfit, arr[i] - bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);
    }

    cout << "max profit is : " << maxProfit << endl;

    return 0;
}