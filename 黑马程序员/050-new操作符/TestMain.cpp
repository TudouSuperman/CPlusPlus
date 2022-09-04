//
// Created by QsPlus on 2022/9/4.
//

#include <iostream>

using namespace std;

int *TestFunction_1()
{
    // new 返回是，该数据类型的指针（int 类型就返回 int , double 类型就返回 double）。
    return new int(99);
}

void TestProcess_1()
{
    int *p = TestFunction_1();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;

    // 堆区的数据，由程序员管理开辟和管理释放。
    // 如果想释放堆区的数据，利用关键字 delete。
    delete p;

    // 内存已经释放，再次访问就是非法操作。
    cout << *p << endl;
}

int *TestFunction_2()
{
    // new 创建数组在堆区，并返回数组的首地址。
    return new int[3]{1, 2, 3};
}

void TestProcess_2()
{
    int *p = TestFunction_2();
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;

    // 堆区的数据，由程序员管理开辟和管理释放。
    // 如果想释放堆区数组的数据，利用关键字 delete[]，否则只会释放一个数据。
    delete[] p;

    // 内存已经释放，再次访问就是非法操作。
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;
}

int main()
{
    // C++ 中利用 new 操作符在堆区开辟数据。
    // 堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 delete。
    // 利用 new 创建的数据，返回该数据对应的类型的指针。

    // 1.new 的基本语法。
    TestProcess_1();

    // 2.在堆区利用 new 开辟数组。
    TestProcess_2();

    return 0;
}