#include <iostream>
using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;

    for (int i = 3; i <= n; i++)
    {
        if (i % 3 == 0)
            res += i;
    }
    cout << res << endl;

    return 0;
}