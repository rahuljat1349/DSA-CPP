#include<iostream>
#include<vector>
using namespace std;


void getAllSubsets(vector<int> arr, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
    if(i == arr.size()){
       
            allSubsets.push_back({ans});
    
        return;
    }

    // include
    ans.push_back(arr[i]);
    getAllSubsets(arr,ans,i+1,allSubsets);

    ans.pop_back();

    // exclude

    // to prevent duplicates
    int idx = i+1;
    while(idx < arr.size() && arr[idx] == arr[idx-1]){
        idx++;
    }
    getAllSubsets(arr, ans, idx,allSubsets);
}
int main()
{
    vector<int> arr = {1,2,3};
    vector<int>ans;
    vector<vector<int>> allSubsets;
    int i = 0;

    getAllSubsets(arr,ans,i,allSubsets);

    return 0;
}