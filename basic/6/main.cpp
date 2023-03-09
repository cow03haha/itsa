#include <iostream>
using namespace std;

int main()
{
    int season;

    cin >> season;

    switch (season)
    {
    case 3 ... 5:
        cout << "Spring";
        break;
    case 6 ... 8:
        cout << "Summer";
        break;
    case 9 ... 11:
        cout << "Autumn";
        break;
    case 12:
    case 1 ... 2:
        cout << "Winter";
        break;

    default:
        break;
    }

    return 0;
}