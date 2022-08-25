//
// Created by QsPlus on 2022/8/25.
//

#include <iostream>

using namespace std;

int main() {

    // sizeof 关键字可以求出数据类型占用的内存大小。
    // 语法 : sizeof(数据类型/变量) 括号里可以写类型或者便利哪

    int testInt = 100;

    cout << "int 所占内存大小 : " << sizeof(int) << endl;
    cout << "int 所占内存大小 : " << sizeof(testInt) << endl;

    return 0;
}