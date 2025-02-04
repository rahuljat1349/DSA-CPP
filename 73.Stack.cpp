#include<iostream>
#include<list>
#include<vector>
#include<stack>
using namespace std;


// using linked list
class stackList{
    list<int> l;
public:
    void push(int x){
        l.push_front(x);
    }
    void pop(){
        l.pop_front();
    }
    int top(){
        return l.front();
    }
    bool empty(){
        return l.size()==0;
    }
};


// using vector
class Stack {
    vector<int> v;
public:
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v[v.size()-1];
    }
    bool empty(){
        return v.size()==0;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    

    stackList sl;
    sl.push(1);
    sl.push(2);
    sl.push(3);
    cout<<sl.top()<<endl;
    
    
    return 0;
}