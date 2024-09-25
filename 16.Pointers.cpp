#include <iostream>
using namespace std;

int main()
{

    // pointer
    int a = 16;
    int *ptr = &a;

    // cout << ptr << endl;
    // cout << &a << endl;
    //
    //
    //
    //
    //
    //
    // pointer to pointer
    int **ptr2 = &ptr;
    cout << ptr2 << endl;
    cout << &ptr << endl;
    // cout <<  << endl;
    //
    //
    //
    //
    //
    // Dereference operator
    cout << *(&a) << endl;
    //or
    cout << *(ptr) << endl;
    //or
    cout << **(ptr2) << endl;
    return 0;
}