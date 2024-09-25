#include <iostream>
#include <vector>

using namespace std;

int maxWaterContain(vector<int> height)
{
    int maxWater = 0;

    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int w = j - i;
            int h = min(height[i], height[j]);
            int area = w * h;

            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}
//
//
//
//
//
//
//
//
//
// Optmal
int maxWater(vector<int> height)
{
    int maxWater = 0;
    int lp = 0;
    int rp = height.size() - 1;

    while (lp < rp)
    {

        int w = rp - lp;
        int h = min(height[lp], height[rp]);
        int area = h * w;

        maxWater = max(maxWater, area);

        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main()
{

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    // cout << "Maximum water stote capacity is : " << maxWaterContain(height) << endl;

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
    //     Optimal (Two Pointer Approach) ->
    cout << "Maximum water stote capacity is : " << maxWater(height) << endl;

    return 0;
}