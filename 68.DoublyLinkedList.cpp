#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class doublyList
{
    Node *head;
    Node *tail;

public:
    doublyList()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if (head == NULL)
        {
            return;
        }
        
        Node* temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        temp->next = NULL;

        delete temp;
        
    }
    void pop_back(){
        if (head == NULL)
        {
            return;
        }
        Node* temp = tail;
        tail = tail->prev;


        if (tail != NULL)
        {
        tail->next = NULL;
            
        }
        temp->prev = NULL;
        
        delete temp;
    }

    void printList(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            
            
            temp = temp->next;
        }
        cout << "NULL\n";
        
    }
};

int main()
{
    doublyList dll;

    dll.push_back(1);
    dll.push_back(2);
   
    dll.push_front(2);
    dll.push_front(3);


    dll.printList();
    return 0;
}