#include <iostream>
using namespace std;

class CircularQueue
{
    int cap, currSize;
    int *arr;
    int f, r;

public:
    CircularQueue(int size)
    {
        cap = size;
        currSize = 0;
        arr = new int[cap];
        f = 0, r = -1;
    };
    void push(int data)
    {
        if (currSize == cap)
        {
            cout << "Queue is full! \n";
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        currSize++;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty! \n";
            return;
        }

        f = (f + 1) % cap;
        currSize--;
    }
    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty \n";
            return -1;
        }

        return arr[f];
    }
    bool isEmpty()
    {
        return currSize == 0;
    }
    
};

int main()
{
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    

    while (!cq.isEmpty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;
    

    cout << cq.front() << endl;

    return 0;
}