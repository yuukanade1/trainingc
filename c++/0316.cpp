#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "整数を加算します。\n";
    cout << "何個加算しますか : ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cout << "整数 (0で終了) : ";
        cin >> t;
        if (sum + t > 1000) {
            cout << "合計が1,000を超えました。\n最後の数値は無視します。\n";
            break;
        }
        sum += t;
    }
    cout << "合計は" << sum << "です。\n";
}