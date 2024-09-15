#include <iostream>

using namespace std;

int main()
{

    int num = 7;

    int ans = 0;
    int pow = 1;

    while (num > 0)
    {
        int rem = num % 2;
        num /= 2;

        ans += (rem * pow);
        pow *= 10;
       

    }
        cout << ans << endl;
        
        return 0;
}