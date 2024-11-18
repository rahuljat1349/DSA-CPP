#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Friend
{
private:
    string myName;

public:
    Friend(string name) : myName(name) {}

    friend string getName(const Friend &friend1);

    void display() const
    {
        cout << "friend Name: " << myName << endl;
        ;
    }
};

// friend function can grant member level access to public and protected variables.
string getName(const Friend &friend1)
{
    return friend1.myName;
}

int main()
{
    Friend rk("rahul");
    // rk.display();
    cout << getName(rk) << endl;
    return 0;
}