//
// Created by QsPlus on 2022/8/28.
//

#include "iostream"

using namespace std;

int main()
{
    int testInt_1 = 17;
    int testInt_2 = 12;

    cout << testInt_1 + testInt_2 << endl;
    cout << testInt_1 - testInt_2 << endl;
    cout << testInt_1 * testInt_2 << endl;
    cout << testInt_1 / testInt_2 << endl; // 两整数相除，结果依然是整数，小数部分将被剔除。

    int a = 10;
    int b = 0;
    cout << a / b << endl; // 错误！两数相除，除数是不可以为 0 的。

    return 0;
}