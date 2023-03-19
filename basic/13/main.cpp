#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

// 定義一個結構體表示撲克牌
struct Card
{
    string suit; // 花色
    int rank;    // 點數
};

// 定義一個比較函數，用來排序
bool cmp(const Card &c1, const Card &c2)
{
    // 先比較花色，若花色不同則以花色大小為準
    if (c1.suit != c2.suit)
    {
        if (c1.suit == "S")
            return true;
        if (c2.suit == "S")
            return false;
        if (c1.suit == "H")
            return true;
        if (c2.suit == "H")
            return false;
        if (c1.suit == "D")
            return true;
        if (c2.suit == "D")
            return false;
        if (c1.suit == "C")
            return true;
        if (c2.suit == "C")
            return false;
    }
    // 若花色相同，則以點數大小為準
    return c1.rank > c2.rank;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<Card> decks;
    for (int i = 0; i < n; i++)
    {
        string input;
        getline(cin, input);    // 從鍵盤輸入字串
        stringstream ss(input); // 將字串轉換為 stringstream

        string s;
        while (ss >> s) // 遍歷 stringstream 中的單字
        {
            Card temp;
            temp.suit = s.substr(0, 1);
            if (s.length() == 2)
                temp.rank = s[1] - '0'; // 取出點數
            else
                temp.rank = 10 + s[2] - '0'; // 由於有兩個字元，需額外處理
            decks.push_back(temp);
        }

        // 對每疊撲克牌排序並輸出
        sort(decks.begin(), decks.end(), cmp);
        for (int j = 0; j < decks.size(); j++)
        {
            cout << decks[j].suit << decks[j].rank << " ";
        }
        cout << "\b " << endl;
        decks.clear();
    }

    return 0;
}