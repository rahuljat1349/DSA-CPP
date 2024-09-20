#include <iostream>

using namespace std;

int main()
{
    //   subarray = continous part of an array.
    // Ex:-  int arr[] = {1,2,3,4,5}
    //       subarrays are - 1 2 3 4 5
    //                      12 23 34 45
    //                      123 234 345
    //                      1234 2345
    //                      12345
    //
    //    -> total no. of subarrays are always => n*(n+1)/2 = 15 (in "arr")
    //
    //     Approach -
    //                  start index        end index
    //                      0              0,1,2,3,4
    //                      1              1,2,3,4
    //                      2              2,3,4
    //                      3              3,4
    //                      4              4
    //
    //
    //
    //
    //

    // int n = 5;
    // int arr[] = {1, 2, 3, 4, 5};

    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = st; end < n; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
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
    //
    //
    //
    //

    // maximum subarray sum

    // int n = 7;

    // int arr[] = {3, -4, 5, 4, -1, 7, -8};
    // int maxSum = INT32_MIN;
    // for (int st = 0; st < n; st++)
    // {
    //     int currentSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currentSum += arr[end];
    //         maxSum = max(maxSum, currentSum);
    //     }
    // }
    // cout << "Maximun Subarray Sum is : " << maxSum << endl;
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
    //
    //
    //
    //
    // Kadane's Algorithm (Most Optimized) -> whenever the sum of 2 numbers becomes < 0 ,Reinitiate current Sum with 0;
    //                                                                               (coz it is gonna decrease next current Sum)
    //
    //
    //
    //
    //
    int n = 7;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT32_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "Maximun Subarray Sum is : " << maxSum << endl;

    return 0;
}