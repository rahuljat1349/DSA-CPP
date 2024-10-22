#include <iostream>
using namespace std;

int main()
{
    // character array
    // char str[100];

    // cout << "write something here.. ";
    // cin.getline(str, 100, '.');
    // cout << "You wrote : " << str << endl;

    // Strings    -> dynamic (runtime rsize)
    string str = "Rahul";

    string str1 = " dudi";

    string str2 = str + str1; // concatenation
    getline(cin, str2);
    cout << str2 << endl;
    // cout << str2.length() << endl;
    return 0;
}