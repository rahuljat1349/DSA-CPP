#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string profession;

    // default constructor
    // must be named exactly as class name
    // Person()
    // {
    //     cout << "Construtor called!" << endl;
    //     name = "Unknown"; // default values..
    //     age = 0;
    //     profession = "undefined";
    // }

    // Parameterized constructor
    Person(string myName, int myAge, string prof)
    {
        cout << "param Construtor called!" << endl;
        name = myName; // default values..
        age = myAge;
        profession = prof;
    }

    // Copy constructor
    Person(const Person &other)
    {
        cout << "copy Construtor called!" << endl;
        name = other.name;
        age = other.age;
        profession = other.profession;
    }

    void personInfo()
    {
        cout << "Person's name is " << name << endl;
        cout << "Person's age is " << age << endl;
        cout << name << " is a " << profession << endl;
    }
};
int main()
{
    Person rahul("Rahul", 20, "Developer");

    // rahul.name = "Rahul";
    // rahul.age = 20;
    // rahul.profession = "Developer";
    rahul.personInfo();
    return 0;
}