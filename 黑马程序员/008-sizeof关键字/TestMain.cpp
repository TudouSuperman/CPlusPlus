//
// Created by QsPlus on 2022/8/25.
//

#include <iostream>

using namespace std;

int main() {

    // sizeof 关键字可以求出数据类型占用的内存大小。
    // 语法 : sizeof(数据类型/变量) 括号里可以写类型或者便利哪

    short testShort = 100;
    cout << "short 所占内存大小 : " << sizeof(short) << endl;
    cout << "short 所占内存大小 : " << sizeof(testShort) << endl;

    int testInt = 100;
    cout << "int 所占内存大小 : " << sizeof(int) << endl;
    cout << "int 所占内存大小 : " << sizeof(testInt) << endl;

    long testLong = 100;
    cout << "long 所占内存大小 : " << sizeof(long) << endl;
    cout << "long 所占内存大小 : " << sizeof(testLong) << endl;

    long long testLongLong = 100;
    cout << "long long 所占内存大小 : " << sizeof(long long) << endl;
    cout << "long long 所占内存大小 : " << sizeof(testLong) << endl;

    // 结论 : short < int <= long <= longlong (long 在 32 位 或 64 位电脑上体现都是不一样的)

    return 0;
}