//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

// 定义函数：函数返回值 函数名(形参)。
void TestFunction1(string str)
{
    cout << str << endl;
}

// 值传递（对实参进行拷贝给形参，不会对实参进行改变）。
void TestFunction2(int number1, int number2)
{
    cout << "交换前：" << "number1：" << number1 << " number2：" << number2 << endl;
    int temp = number1;
    number1 = number2;
    number2 = temp;
    cout << "交换后：" << "number1：" << number1 << " number2：" << number2 << endl;
}

int main()
{
    // 函数调用：函数名(实参)。
    TestFunction1("测试函数成功！");

    // 函数值传递的时候不会影响实参。
    TestFunction2(99, 66);

    return 0;
}