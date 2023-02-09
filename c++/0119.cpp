#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "名前の入力 : ";
    getline(cin, name);

    cout << "こんにちは" << name << "さん。\n";
}