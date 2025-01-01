#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) : data(data), next(NULL) {}
};

class List
{
    Node *head, *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_back(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void push_front(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "list is already empty!" << endl;
            return;
        }

        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "list is already empty!" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;

        if (head == NULL)
        {
            tail = NULL;
        }
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "There is nothing to print!" << endl;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }

    void insert(int data, int idx)
    {
        Node *temp = head;
        if (idx < 0)
        {
            cout << "Invalid operation!" << endl;
            return;
        }

        if (idx == 0)
        {
            push_front(data);
            return;
        }

        for (int i = 0; i < idx - 1; i++)
        {
            temp  = temp->next;

            if (temp == NULL)
            {
                cout << "Invalid operation!" << endl;
                return;
            }
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    int search(int val){
        Node* temp = head;
        int idx = 0;
        while (temp != NULL )
        {
           if(temp->data == val) {
            return idx;
           }
           idx++;
           temp= temp->next;
        }
        return -1;
    }
};

int main()
{
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_front(4);
    ll.push_front(5);

    // ll.insert(7, -1);

    cout << ll.search(3) << endl;;




    ll.print();
    return 0;
}