#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> vec = {1, 2, 3, 4, 5};

    // iterator

    // vector<int>::iterator itr;

    // for (itr = vec.begin(); itr != vec.end(); itr++)
    // {
    //     cout << *(itr) << " ";
    // }
    // cout << endl;

    //
    //
    //

    // reverse iterator

    // vector<int>::reverse_iterator itr;

    // for (itr = vec.rbegin(); itr != vec.rend(); itr++)
    // {
    //     cout << *(itr) << " ";
    // }
    // cout << endl;

    // ***
    // // it can automatically understand the itr

    // for (auto itr = vec.rbegin(); itr != vec.rend(); itr++)
    // {
    //     cout << *(itr) << " ";
    // }
    // cout << endl;

    //// lists

    // list<int>l;
    // l.push_back(1);
    // l.push_front(2);

    // lists have no index

    // //  deque
    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);

    // pairs

    // pair<int,int>p={1,5};
    // cout << p.first << endl;

    // pair<int,pair<char,int>> pr = {1,{'a',5}};
    // cout << pr.second.first << endl;

    // vector with pair

    // vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    // vec.emplace_back(4, 5); // creates in-place object
    // or
    // vec.push_back({4,5});  // insert

    // for (auto p : vec)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // Non sequential data
    //
    // Stack -> Last in, first out
    // stack<int> s;
    // s.push(1);
    // s.push(2);

    // while (!s.empty())
    // {
    //      cout << s.top() << " "; // 1
    //      s.pop();
    // }
    // cout << endl;

    // Queue   -> first in first out
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    // cout << endl;

    // Priority queue   -> largest element on the top

    // priority_queue<int>pq;
    // priority_queue<int, vector<int>, greater<int>> pq; // smallest on top
    // pq.push(5);
    // pq.push(3);

    // Map     // (key,value)

    // map<string, string> m;   // it is sorted by key (ascending)
    // m["Name"] = "Rahul";

    // MultiMap     can be saved multiple keys
    // multimap<int,string> m;
    // m.emplace(1,200);
    // m.emplace(1,300);
    // m.emplace(1,400);

    // Unordered map      -> saves in random order
    //  unordered_map<int,int> um;
    //  um.emplace(1, 200);
    //  um.emplace(2, 300);
    //  um.emplace(3, 400);

    // Sets   -> stores unique values

    // set<int> s;
    // s.insert(1);
    // s.insert(1);
    // s.insert(1);
    // s.insert(1);

    // for (auto val : s)
    // {
    //     cout << val << " ";    // 1
    // }
    // cout << endl;

    // Multi Set  ->   stores duplicate values
    // multiset<int> s;

    // s.insert(1);
    // s.insert(1);
    // s.insert(1);
    // for (auto val : s)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // unordered Set  ->   stores without order O(1)
    // unordered_set<int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // for (auto val : s)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

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
    // Algorithms
    int arr[5] = {1, 5, 4, 2, 3};

    sort(arr, arr + 5); // simple sort

    sort(arr, arr + 5, greater<int>()); // descending sort
    
    return 0;
}