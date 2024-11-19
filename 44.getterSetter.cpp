#include <iostream>
#include <string>
using namespace std;

class Rahul
{
private:
    string myName;

public:
    // deligating contrutor
    Rahul(string name):Rahul(){}
    Rahul()
    {
        myName = "Rahul";
    }

    // getter
    string getMyName()
    {
        return myName;
    }
    // setter
    void setMyName(string name)
    {
        myName = name + " Dudi";
    }
};

int main()
{
    Rahul rahul("ok"); // deligating constructor calling

    // rahul.setMyName("Rahul");
    cout << rahul.getMyName() << endl;
    return 0;
}