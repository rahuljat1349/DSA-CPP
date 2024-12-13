#include <iostream>
using namespace std;

class Sapians
{ // anstract class
public:
    virtual void eat() = 0; // defines abstraction
};

class Human : public Sapians
{
public:
    void eat() override
    {
        cout << "Homo sapian eating.." << endl;
    }
};

int main()
{
    Human h1;
    h1.eat();
    return 0;
}