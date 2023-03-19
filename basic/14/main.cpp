#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int len = input.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (input[i] != input[len - i - 1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}