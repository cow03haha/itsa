#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int start_h, start_m, end_h, end_m, time, rate = 30, total = 0;

    cin >> start_h >> start_m;
    cin >> end_h >> end_m;
    time = (end_h - start_h - 1) * 2 + (60 - start_m + end_m) / 30;
    
    for (int i = 1; i <= time; i++)
    {
        if (i > 8) rate = 60;
        else if (i > 4) rate = 40;
        total += rate;
    }

    cout << total;

    return 0;
}