#include<vector>
#include<stack>
#include<iostream>
using namespace std;


void findSpan(vector<int> &ans, vector<int> &prices){
    stack<int> s;
    for(int i = 0 ; i < prices.size(); i++){
        while(s.size() !=0 && prices[s.top()] <= prices[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(i+1);
        }
        else{
            ans.push_back(i-s.top());
        }
        s.push(i);
    }
}
int main()
{

    vector<int> prices = {100,80,60,70,60,75,85};
    vector<int> ans;

    findSpan(ans, prices);

    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}