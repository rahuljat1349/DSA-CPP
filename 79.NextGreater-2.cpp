#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NextGreater(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> s;

    for (int i = 2*n -1; i >= 0; i--)
    {
        while (s.size() > 0 && nums[s.top()] <= nums[i%n])
        {
            s.pop();
        }
         ans[i%n] = s.empty() ? -1 : nums[s.top()];
         s.push(i%n);
        
    }
    return ans;
    
}

int main()
{
    vector<int> nums = {1,2,1};
    vector<int> ans = NextGreater(nums);

    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}