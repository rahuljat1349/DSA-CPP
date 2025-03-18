#include <iostream>
#include <unordered_map>
using namespace std;

class LRCCache
{
public:
    class Node
    {
    public:
        int key, val;
        Node *next;
        Node *prev;
        Node(int key, int val)
        {
            this->key = key;
            this->val = val;
        }
    };
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);

    unordered_map<int, Node *> m;
    int limit;

    void addNode(Node *newNode)
    {
        Node *nextNode = head->next;

        newNode->next = nextNode;
        nextNode->prev = newNode;

        head->next = newNode;
        newNode->prev = head;
    }

    void delNode(Node *oldNode)
    {
        Node *oldPrev = oldNode->prev;
        Node *oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRCCache(int capacity)
    {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void put(int key, int val)
    {
        if (m.find(key) != m.end())
        {
            Node *oldNode = m[key];
            m.erase(key);
            delNode(oldNode);
        }
        if (m.size() == limit)
        {
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }

        Node *newNode = new Node(key, val);
        addNode(newNode);
        m[key] = newNode;
    }

    int get(int key)
    {
        if (m.find(key) == m.end())
        {
            return -1;
        }

        Node *ansNode = m[key];

        // put(key, res);  takes extra space in heap by creating new node

        delNode(ansNode);

        addNode(ansNode);

        return ansNode->val;
    }
};

int main()
{
    LRCCache *obj = new LRCCache(2);
    obj->put(1,2);
    obj->put(3,4);
    obj->put(1,2);
    
    cout << obj->get(7)<< endl;
    cout << obj->get(3)<< endl;
    obj->put(7,8);
    cout << obj->get(1)<< endl;
    cout << obj->get(7)<< endl;
    cout << obj->get(3)<< endl;

    return 0;
}