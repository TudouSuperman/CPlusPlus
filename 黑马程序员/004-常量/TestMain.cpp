//
// Created by QsPlus on 2022/8/25.
//

#include <iostream>

using namespace std;

// 1.#define 宏常量
#define Day 7

int main()
{
    // 定义常量只有两种方法。
    // 1.#define 宏常量。
    // 2.const 修饰的变量。

    // Day = 8; // 错误，Day是常量，一旦修改就会报错。
    cout << "一周有 : " << Day << "天。" << endl;

    // 2.const 修饰的变量。
    const int month = 12;
    // month = 24; // 错误，const 修饰的变量也称为常量。
    cout << "一年有 : " << month << "个月。" << endl;
    return 0;
}