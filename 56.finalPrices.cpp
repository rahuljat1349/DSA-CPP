#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// problem no. 1475

// brut

void getPrices(vector<int> &prices)
{
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j <= prices.size(); j++)
        {
            if (prices[j] <= prices[i])
            {
                prices[i] = prices[i] - prices[j];
                break;
            }
        }
    }
}
//
//
//
//
//
//
//
//

void getFinalPrices(vector<int> &prices)
{
    stack<int> s;

    for (int i = 0; i < prices.size(); i++)
    {
        while (!s.empty() && prices[i] <= prices[s.top()])
        {
            prices[s.top()] = prices[s.top()] - prices[i];
            s.pop();
        }

        s.push(i);
    }
}

int main()
{

    vector<int> prices = {8, 4, 6, 2, 3};
    getPrices(prices);

    for (auto price : prices)
    {
        cout << price << " ";
    }
    cout << endl;
    return 0;
}