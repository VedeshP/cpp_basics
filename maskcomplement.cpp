#include <iostream>

using namespace std;

int main(void)
{
    int a = 5;
    int copy = a;
    int bitcount = 0;
    while (copy != 0)
    {
        copy >>= 1;
        cout << copy << endl;
        bitcount++;
    }

    cout << "bitcount: " << bitcount << endl;

    int bitmask = (1 << bitcount);
    bitmask--;

    cout << bitmask << endl;

    int ans = a ^ bitmask;

    cout << "ans: " << ans << endl;

    int something = 5 & 7;
    cout << something << endl;
    
    return 0;
}