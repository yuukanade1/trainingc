#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "整数a : ";   cin >> a;
    cout << "整数b : ";   cin >> b;
    
    int min = a < b ? a : b;

    cout << "小さいほうの値は" << min << "です。\n";
}