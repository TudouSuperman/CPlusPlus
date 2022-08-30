//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

int main()
{
    // C++ 中数组名称默认为第一个元素的地址，所以不需要使用 & 方式来取地址。
    // 数组名称(testArray)是一个指针，它保存着数组第一个元素的地址。

    int testArray[] = {1, 2, 3, 4, 5, 6};
    int *p = testArray;
    cout << "利用指针访问数组中的第一个元素：" << *p << endl;
    p++; // *p++ 解引用的方式也可以使用。
    cout << "利用指针访问数组中的第二个元素：" << *p << endl;

    cout << "利用指针遍历数组" << endl;
    int *p2 = testArray;

    for (int i = 0; i < 6; i++)
    {
        cout << *p2 << " - ";
        p2++;
    }

    return 0;
}