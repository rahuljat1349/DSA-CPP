#include<iostream>
#include<vector>
using namespace std;

void getPerms(vector<int> &nums, int idx, vector<vector<int>> & ans){
    if(idx == nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i = idx; i < nums.size(); i++){
        swap(nums[i], nums[idx]);

        getPerms(nums, idx+1, ans);

        swap(nums[i], nums[idx]);
    }
}
int main()
{
    vector<int> nums = {1,2,3};
    int idx = 0;
    vector<vector<int>> ans;
    return 0;
}