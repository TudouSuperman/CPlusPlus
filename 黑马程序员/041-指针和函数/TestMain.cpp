//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

// 值传递（不可以改变实参）。
void TestFunction_1(int number1, int number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;

    cout << "number1：" << number1 << endl;
    cout << "number2：" << number2 << endl;
}

// 地址传递（可以改变实参）。
void TestFunction_2(int *number3, int *number4)
{
    int temp = *number3;
    *number3 = *number4;
    *number4 = temp;

    cout << "number3：" << *number3 << endl;
    cout << "number4：" << *number4 << endl;
}

int main()
{
    // 1.值传递（拷贝一份数据传递，传递的不是本体数据）。
    int testInt_1 = 99;
    int testInt_2 = 66;
    TestFunction_1(testInt_1, testInt_2);
    cout << "数据本体 number1：" << testInt_1 << endl;
    cout << "数据本体 number2：" << testInt_2 << endl;

    // 2.引用传递（地址传递，传递的是本体，修改后本体也会被修改）。
    int testInt_3 = 99;
    int testInt_4 = 66;
    TestFunction_2(&testInt_3, &testInt_4);
    cout << "数据本体 number3：" << testInt_3 << endl;
    cout << "数据本体 number4：" << testInt_4 << endl;

    return 0;
}