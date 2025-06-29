#include <iostream>
#include <vector>

using namespace std;

int identifyStartStation(vector<int> gas, vector<int> cost)
{
    int totalCost = 0, totalGas = 0, startIndex = 0, currentGas = 0;

    for(int i = 0; i < gas.size(); i++){
        totalCost += cost[i];
        totalGas += gas[i];
        currentGas += (gas[i] - cost[i]);
        if(currentGas < 0){
            startIndex = i + 1;
            currentGas = 0;
        }
    }
    return totalGas < totalCost ? -1 : startIndex;
}

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int answer = identifyStartStation(gas, cost);
    cout << answer << endl;

    return 0;
}