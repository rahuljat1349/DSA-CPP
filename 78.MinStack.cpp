#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// first approach
class minStack
{
public:
    stack<pair<int, int>> s;
    minStack() {}

    void push(int val)
    {
        if (s.empty())
        {
            s.push({val, val});
        }
        else
        {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }
    void pop()
    {
        s.pop();
    }
    int top()
    {
        return s.top().first;
    }
    int getMin()
    {
        return s.top().second;
    }
};

// second approach(optimal)

class MinStack
{
    stack<long long int> s;
    long long int minVal;

public:
    MinStack() {}
    void push(int val)
    {
        if (s.empty())
        {
            s.push(val);
            minVal = val;
            
        }

        else if (val < minVal)
        {
            s.push((long long)2 * val - minVal);
            minVal = val;
        }
        else
        {
            s.push(val);
        }
    }
    void pop()
    {
        if (s.top() < minVal)
        {
            minVal = 2 * minVal - s.top();
        }
        s.pop();
    }
    int top()
    {
        if (s.top() < minVal)
        {
            return minVal;
        }
        return s.top();
    }
    int getMin()
    {
        return minVal;
    }
};

int main()
{

    return 0;
}