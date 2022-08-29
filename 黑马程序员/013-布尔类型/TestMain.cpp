//
// Created by QsPlus on 2022/8/28.
//

#include "iostream"

using namespace std;

int main()
{
    // 1.创建 bool 数据类型。
    bool flag;
    flag = true;
    cout << flag << endl;
    flag = false;
    cout << flag << endl;
    // 本质上：1 代表 true，0 代表 false（所有非 0 的值都代表 true）。

    // 2.查看 bool 类型所占内存空间。
    cout << "bool 类型所占内存空间：" << sizeof(flag) << endl;
    // bool 类型占用 1 字节大小。

    return 0;
}