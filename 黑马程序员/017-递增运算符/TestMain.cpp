//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // 1.前置递增。
    int a = 10;
    cout << "前置递增：" << ++a << endl;

    // 2.后置递增。
    int b = 10;
    cout << "前置递增：" << a++ << endl;

    // 3.前置与后置的区别。
    // 前置递增，先让变量 + 1 然后进行表达式运算。
    int a_1 = 10;
    int a_2 = ++a_1 * 10;
    cout << "前置递增区别：" << a_1 << endl;
    cout << "前置递增区别：" << a_2 << endl;

    // 后置递增，先进行表达式运算，后让变量 + 1。
    int b_1 = 10;
    int b_2 = b_1++ * 10;
    cout << "后置递增区别：" << b_1 << endl;
    cout << "后置递增区别：" << b_2 << endl;

    return 0;
}