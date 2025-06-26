#include<iostream>
#include<vector>
#include <deque>

using namespace std;

//calculate maximum in each window of k

vector<int> getMaxArray(vector<int> nums, int k){
        vector<int> result;
        deque<int> dq;

        for (int i = 0; i < nums.size(); i++)
        {
            if(!dq.empty() && dq.front() <= i - k){
                dq.pop_front();
            }

            while (!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);
            
            if( i >= k-1){
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
        
}

int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ansArr = getMaxArray(nums, k);

    for(int i : ansArr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}