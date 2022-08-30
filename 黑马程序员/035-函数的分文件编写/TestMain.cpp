//
// Created by QsPlus on 2022/8/29.
//

#include "TestHead.h"

int main()
{
    // 主体文件里调用。
    TestFunction();
    return 0;
}

// 头文件里声明，主体文件里定义。
void TestFunction()
{
    cout << "测试函数！" << endl;
}