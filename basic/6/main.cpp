#include <iostream>
using namespace std;

int main()
{
    int season;

    cin >> season;

    switch (season)
    {
    case 3 ... 5:
        cout << "Spring" << endl;
        break;
    case 6 ... 8:
        cout << "Summer" << endl;
        break;
    case 9 ... 11:
        cout << "Autumn" << endl;
        break;
    case 12:
    case 1 ... 2:
        cout << "Winter" << endl;
        break;

    default:
        break;
    }

    return 0;
}