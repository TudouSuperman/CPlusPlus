//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;

    cout << "10 和 20 谁大 ：" << (a > b ? a : b) << "大！" << endl;

    // C++ 中三元运算符返回的是变量，可以继续赋值。
    (a > b ? a : b) = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}