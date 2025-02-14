#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void prevSmaller(vector<int> &arr, vector<int> &ans){
    stack<int> s;
    for(int i = 0; i < arr.size(); i++){
        while(s.size() > 0 && s.top() >= arr[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
}

int main()
{
    vector<int> arr = {3, 1, 0, 8, 6};
    vector<int> ans(arr.size(),0);

    prevSmaller(arr, ans);

    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}