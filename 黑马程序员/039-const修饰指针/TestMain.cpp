//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

int main()
{
    int testValue = 99;

    // 1.const 修饰指（指针指向的指向可以更改，指针指向的值不可以更改）。
    const int *p1;
    p1 = &testValue; // 正确。
    // *p1 = 100; // 错误。

    // 2.const 修饰常量（指针的指向不可以改，指针指向的值可以改）。
    int *const p2 = &testValue;
    // p2 = &testValue; // 错误。
    *p2 = 100; // 正确。

    // 3.const 修饰指针和常量（指针的指向，和指针指向的值，都不可以更改，等于只读的状态）。
    const int *const p3 = &testValue;
    // p3 = &testValue; // 错误。
    // *p3 = 100; // 错误。

    // 通过查看 const 右边紧跟的是指针还是常量来判断，如果是指针就是常量指针，如果是常量就是指针常量。

    return 0;
}