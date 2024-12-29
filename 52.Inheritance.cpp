#include <iostream>
using namespace std;

 class Species
{ // abstract class
protected:
    string name;

public:
    virtual void eat() {};
};

class HomoSapian : public Species
{ // inherited class
public:
    HomoSapian()
    {
        this->name = "Homo Sapian";
    }
    void eat() override final
    {
        cout << name << " is eating.." << endl;
    }
};
int main()
{
    Species *s1 = new HomoSapian;
    s1->eat();
    return 0;
}