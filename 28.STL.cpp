#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // iterator

    // vector<int>::iterator itr;

    // for (itr = vec.begin(); itr != vec.end(); itr++)
    // {
    //     cout << *(itr) << " ";
    // }
    // cout << endl;

    //
    //
    //

    // reverse iterator

    // vector<int>::reverse_iterator itr;

    // for (itr = vec.rbegin(); itr != vec.rend(); itr++)
    // {
    //     cout << *(itr) << " ";
    // }
    // cout << endl;


    // ***
    // it can automatically understand the itr

    for (auto itr = vec.rbegin(); itr != vec.rend(); itr++)
    {
        cout << *(itr) << " ";
    }
    cout << endl;

    return 0;
}