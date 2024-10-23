#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string profession;

    void personInfo()
    {
        cout << "Person's name is " << name << endl;
        cout << "Person's age is " << age << endl;
        cout << name << " is a " << profession << endl;
    }
};
int main()
{
    Person rahul;
    rahul.name = "Rahul";
    rahul.age = 20;
    rahul.profession = "Developer";
    rahul.personInfo();
    return 0;
}