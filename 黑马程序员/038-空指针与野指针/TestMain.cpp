//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

void TestFunction_1();

void TestFunction_2();

int main()
{
    // 空指针与野指针，都不属于我们申请的空间，因此不要访问。
    TestFunction_1();
    TestFunction_2();
    return 0;
}

// 空指针。
void TestFunction_1()
{
    // 空指针：指针变量指向内存中编号为 0 的空间（0 - 255 之间的内存编号是系统占用的，因此不可以访问。）。
    // 用途：初始化指针变量。
    // 注意：空指针指向的内存是不可以访问的。

    // 1.空指针：用于给指针变量进行初始化。
    int *p = nullptr;
    // 2.空指针：是不可以进行访问的。
    *p = 99;
    cout << *p << endl;
}

// 野指针。
void TestFunction_2()
{
    // 野指针：程序中指针指向不明地址（非法内存空间）为野指针。
    // 程序中尽量避免出现野指针，因为野指针有太多不确定性，出现问题会直接导致程序的崩溃。
    int *p = (int *) 0x9191919;
    cout << *p << endl;
}