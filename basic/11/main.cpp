#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    while (n--)
    {
        int row, col;
        cin >> row >> col;

        // 建立二維陣列並輸入元素
        int arr[col][row];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> arr[j][i];
            }
        }

        // 輸出反轉後的陣列
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}