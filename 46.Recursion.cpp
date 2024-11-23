#include <iostream>
using namespace std;
void printNums( double n)
{
    if (n == 1)
    {
        cout << n << endl;
        return;
    }
    cout << n << " ";
    printNums(n - 1);
}
int main()
{
    printNums(100000);
    return 0;
}