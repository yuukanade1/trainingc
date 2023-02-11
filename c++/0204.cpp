#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "整数値 : ";
    cin >> n;

    if (!n)
        cout << "その値は0です。\n";
    else
        cout << "その値は0ではありません。\n";
}