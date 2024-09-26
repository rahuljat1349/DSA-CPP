#include <iostream>
using namespace std;

// Pass by reference using pointers
void changeAbyPointer(int *a)
{
    *a = 12;
}
// Pass by reference using alias
void changeAbyAlias(int &b) // it is not an address but an alias and refers to original variable's address
{
    b = 12;
}
int main()
{

    // pointer
    // int a = 16;
    // int* ptr = &a;

    // cout << ptr << endl;
    // cout << &a << endl;
    //
    //
    //
    //
    //
    //
    // pointer to pointer
    // int **ptr2 = &ptr;
    // cout << ptr2 << endl;
    // cout << &ptr << endl;
    // cout <<  << endl;
    //
    //
    //
    //
    //
    // Dereference operator
    // cout << *(&a) << endl;
    // or
    // cout << *(ptr) << endl;
    // or
    // cout << **(ptr2) << endl;

    //
    //
    //
    //
    //
    //
    //
    // NULL pointera
    // int *null = NULL;
    // cout << null << endl;

    //
    //
    //
    //
    //
    //
    //
    // Pass by reference
    // 1. ny pointers
    // int a = 10;

    // changeAbyPointer(&a);

    // 2. alias
    //   changeAbyAlias(a);
    // cout << a << endl;

    //
    //
    //
    //
    //
    // Array pointers
    // int arr[] = {1,2,3,4,5};  // Array's name are actually pointers and always points to 0'th index
    // it is a constant pointer
    // verify
    // cout << *arr << endl; // ==> 1
    // cout << *(arr+1) << endl; // ==> 2

    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // Pointer arithmatic
    // increment and decrement (++, --)
    int a = 10;
    int *ptr = &a;

    // cout << ptr << endl;
    ptr++; //+4
    // cout << ptr << endl;
    // and if
    ptr = ptr + 1; //+4
    ptr = ptr + 3; //+12
    // cout << ptr << endl;

    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    // we can't add two pointers but can subtract two pointers and it will return no. of blocks of type of pointers
    int *ptr1;
    int *ptr2 = ptr1+2;

     cout << ptr2 - ptr1 << endl; 
     // All relational operators .....

     cout << (ptr1 != ptr2) << endl; // ==> 1

    return 0;
}