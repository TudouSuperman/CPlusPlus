//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // 只有整型变量才可以进行取模运算。

    // 取模运算本质就是取余数。
    cout << 10 % 3 << endl;
    // 当余数除不过的时候结果还是本身。
    cout << 3 % 10 << endl;
    // 错误！两个数相除，除数不可以为 0，所以也不可以取模运算。
    cout << 10 % 0 << endl;
    // 两个小数是不可以做取模运算的。
    // cout << 3.14f % 1.17f << endl;
}