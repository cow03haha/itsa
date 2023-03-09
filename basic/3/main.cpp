#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;
    if (x + y > 200) cout << "outside";
    else cout << "inside";
    return 0;
}