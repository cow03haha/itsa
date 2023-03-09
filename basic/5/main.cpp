#include <iostream>
using namespace std;

int main()
{
    int dec;

    cin >> dec;
    
    for (int i = 7; i >= 0; i--)
    {
        int k = dec >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }

    return 0;
}