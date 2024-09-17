#include <iostream>

using namespace std;

void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    // int marks[5] = {99,25,45,36,47};
    // array is linear and contiguous.

    // int price[] = {56,78,65}; // we don't really need to give a size.

    // array indexing
    // marks[0] = 101;

    // size of array
    // int sz = sizeof(marks)/sizeof(int);

    // looping
    //  for (int i = 0; i < sz; i++)
    //  {
    //      cout << marks[i] << endl;
    //  }

    // taking input

    // int size = 5;
    // int marks[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> marks[i];
    // }
    // cout << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    //
    //
    //
    //
    //
    //
    //
    //

    // find smallest and largest

    // int marks[] = {99, 25, 45, 36, 15, 47};

    // int sml = INT32_MAX, lgt = INT32_MIN;

    // int lgIndex = 0, smIndex = 0;

    // for (int i = 0; i < 6; i++)
    // {
    //     if (marks[i] < sml)
    //     {
    //         smIndex = i;
    //     }
    //     sml = min(marks[i], sml);

    //     if (marks[i] > lgt)
    //     {
    //         lgIndex = i;
    //     }
    //     lgt = max(marks[i], lgt);
    // }

    // cout << "Largest number is " << lgt << " at index " << lgIndex << endl;
    // cout << "Smallest number is " << sml << " at index "<< smIndex << endl;

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

    // Pass by reference
    // Arrays are implicitly pass by reference

    // int arr[] = {1,2,3};

    // changeArr(arr,3);

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << " "; //2 4 6
    // }
    // Arrays names are implicitly "Pointers"
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
    //
    //
    //
    //
    //
    //
    //
    //
    // Linear search (Algorithm)
    // int size = 8;
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int target = 9;

    // int ans = search(arr, size, target);

    // cout << "The answer is : " << ans << endl;

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
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Reverse an array  (swapping)
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int length = sizeof(arr) / sizeof(int);
    // for (int i = 0; i < length / 2; i++)
    // {
    //     // int first = arr[i];
    //     // arr[i] = arr[length-i-1];
    //     // arr[length-i-1] = first;

    // // Or

    //     swap(arr[i],arr[length-i-1]);

    // }

    // Or (simple)
    // int start = 0, end = length - 1;
    // while (start < end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // for (int i = 0; i < length; i++)
    // {
    //     cout << arr[i] << " ";
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
    //
    //
    //
    // Questions
    // Q-1 -> calculate sum and product of all numbers in an array.

    // int arr[] = {1, 2, 3, 4};
    int sz = 4;
    // int sum = 0, product = 1;
    // for (int i = 0; i < sz; i++)
    // {
    //     sum += arr[i];
    //     product *= arr[i];
    // }

    // cout << "sum : " << sum << " product : " << product;

    // Q-2 -> swap the max and min of an array.
    // int max = INT32_MIN;
    // int min = INT32_MAX;

    // for (int i = 0; i < sz; i++)
    // {
    //    if (arr[i] > max)
    //    {
    //         max = i;
    //    }
    //    if (arr[i] < min)
    //    {
    //         min = i;
    //    }

    // }
    // swap(arr[max],arr[min]);
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Q-3 -> print unique values in an array.
    // int arr2[] = {1,2,3,4,1,2,5,4};
    // int size = 8;

    // for (int i = 0; i < size; i++){
    //     bool Unique = true;

    //     for (int j = 0; j < size; j++) {
    //         if ( i != j && arr2[i] == arr2[j])
    //         {
    //            Unique = false;
    //            break;
    //         }

    //     }
    //     if (Unique)
    //     {
    //         cout << arr2[i] << " is Unique." << endl;
    //     }

    // }

    // Q-4 -> print intersection of 2 arrays.

    // int arr1[] = {1, 2, 3, 5, 4};
    // int arr2[] = {1, 2, 5, 4};

    // for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
    // {
        

    //     for (int j = 0; j < sizeof(arr2) / sizeof(int); j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             cout << arr1[i] << " ";
    //         }
    //     }
      
    // }




    

    return 0;
}
