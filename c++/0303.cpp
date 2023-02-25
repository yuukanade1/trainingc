#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));

    int no = rand() % 100;
    int x;

    cout << "数当てゲームの時間だ\n";
    cout << "0～99の間で数を当ててみろよ簡単だろ？\n";

    do {
        cout << "数を入力 : ";
        cin >> x;
        if (x > no)
            cout << "もっと小さな数だ。\n";
        else if (x < no)
            cout << "もっと大きな数だ。\n";
    } while (x != no);

    cout << "正解。\n";
}