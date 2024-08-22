#include <iostream>

// For cout, endl ig
using namespace std;

int main(void)
{
    int a = 32;
    int b = 3;
    int c = 0;

    // Multiplying by 2 raised to 2 here
    int lefts = a << 2;
    // Dividng by 2 raised to 2
    int rights = a >> 2;

    int and_op = a & b;
    int or_op = a | b;
    unsigned int not_op = ~c;

    for (int i = 0; i < 32; i++)
    {
        unsigned int x = 15 >> i;
        cout << " " << x;
    }


    cout << "Left Shift 5: " << lefts << endl; //endl is for \n
    cout << "right Shift 5: " << rights << endl; //endl is for \n
    cout << "and: " << and_op << endl;
    cout << "or: " << or_op << endl;
    cout << "not: " << not_op << endl;

    return 0;
}