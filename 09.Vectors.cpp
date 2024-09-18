#include <iostream>
#include <vector>
using namespace std;
int reverse(vector<int> &nums){
    int left = 0;
    int right = nums.size()-1;
    while (left < right)
    {
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
    
}
int main()
{

    // vector <int> vec = {1,2,3};

    // cout << vec[0] << endl;
    // or

    vector<int> vec(3, 0); // (size,value at each location)

    // for each loop in vectors (only & only for)

    for (int val : vec)
    {
        // cout << val << endl;
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
    // vector functions
    // size
    // cout << vec.size() << endl;

    // push_back  (pushes an element to the last)
    vec.push_back(25);
    // cout << vec.size() << endl;

    // pop_back  (pops an element to the last)
    //  vec.pop_back();
    //  cout << vec.size() << endl;

    // front  (returns first value)
    //  cout << vec.front() << endl;

    // back  (returns last value)
    //  cout << vec.back() << endl;

    // at  (returns value at "i'th" index)
    //  cout << vec.at(3) << endl;

    //
    //
    //
    //
    // vector's size increase by 2x every time when it needs even one capacity
    // so, most of time vector's size and capacity are different

    // Ex:-
    // vector <int> vect;
    // vect.push_back(0);
    // vect.push_back(0);
    // vect.push_back(0);

    // cout << vect.size() << endl; //3
    // cout << vect.capacity() << endl; //4
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
    // Q-1: linear search on vector
    vector <int> nums = {1,2,3,4,5,6,7,8,9};
    // int target = 8;
    // for(int val : nums){
    //     if (val == target)
    //     {
    //         cout << "Found!" << endl;
    //         break;
    //     }

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

    // Q-2: reverse a vector
    // reverse(nums);

    // for(int val : nums){
    //     cout << val << " ";
    // }
 


    return 0;
}