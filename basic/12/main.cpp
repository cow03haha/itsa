#include <iostream>
#include <cmath>
using namespace std;

int f(int n)
{
    if (n <= 1) return n + 1;
    else return f(n - 1) + f(floor(n / 2.0));
}

int main()
{
    int k;
    cin >> k;
    cout << f(k) << endl;
    return 0;
}