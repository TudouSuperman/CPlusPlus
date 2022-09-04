//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

int main()
{
    // 1.定义指针。
    int testInt = 99;
    // 指针定义的语法：数据类型 * 指针变量名（有*号的都可以看作是一个指针）。
    int *p;
    // 让指针记录变量 testInt 的地址。
    p = &testInt;
    cout << "testInt 的地址为：" << &testInt << endl;
    cout << "p 的地址为：" << p << endl;

    // 2.使用指针。
    // 可以通过解引用的方式来找到指针指向的内存。
    // 指针前加 * 代表解引用，找到指针指向的内存中的数据（解引用可以直接访问到数据本体进行修改与读取）。
    *p = 999;
    cout << "testInt ：" << testInt << endl;
    cout << "p ：" << *p << endl;

    int a[] = {1, 2, 3, 4, 5};
    int *p1 = (int *) (&a + 1);

    cout << "---------" << endl;
    cout << a + 1 << endl;
    cout << &a[0] + 1 << endl;
    cout << *((int *)(&a + 1)) << endl;

    cout << *((int *) a) << endl;
    cout << *((int *) &a[0]) << endl;
    cout << *((int *) &a) << endl;

    cout << *((int *) a + 1) << endl;
    cout << *((int *) &a[0] + 1) << endl;
    cout << *((int *) &a + 1) << endl;

    cout << *(((int *) a + 1) - 1) << endl;
    cout << *(((int *) &a[0] + 1) - 1) << endl;
    cout << *(((int *) &a + 1) - 1) << endl;

    cout << *((int *) (&a + 1)) << endl;
    cout << *(p1 - 1) << endl;
    // 答案为5因为 a 和 &a[0] 都是取首地址，但是 &a不是

    return 0;
}