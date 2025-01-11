#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class circularList
{
    Node *head;
    Node *tail;

public:
    circularList()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = NULL;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;

        delete temp;
    }
    void pop_back()
    {
        if (head == NULL)
        {
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = tail;
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        tail = prev;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }
    void print()
    {
        cout << head->data;
        Node *temp = head->next;

        while (temp != head)
        {
            cout << "->";
            cout << temp->data;
            temp = temp->next;
        }
    }
};

int main()
{
    circularList cll;

    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);
    cll.push_back(2);
    cll.push_back(3);

    cll.pop_front();
    cll.pop_back();
    cll.pop_back();

    cll.print();
    return 0;
}