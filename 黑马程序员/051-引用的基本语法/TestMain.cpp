//
// Created by QsPlus on 2022/9/4.
//

#include <iostream>

using namespace std;

int main()
{
    // 引用的本质就是给变量起别名。
    // 数据类型 &别名 = 原名
    int a = 10;
    // 创建引用。
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 99;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}