//
// Created by QsPlus on 2022/9/5.
//

#include <iostream>

using namespace std;

int main()
{
    int testInt_01 = 99;

    // 1.引用必须初始化。
    // int &testInt_02; // 不进行初始化会报错。
    int &testInt_02 = testInt_01;

    // 2.引用在初始化后，不可改变。
    int testInt_03 = 88;
    testInt_02 = testInt_03; // 这里等于赋值操作，而不是改变引用（类似于指针常量，此处赋值也是对 testInt_01 的修改）。

    cout << "testInt_01 :" << testInt_01 << endl;
    cout << "testInt_02 :" << testInt_02 << endl;
    cout << "testInt_03 :" << testInt_03 << endl;

    return 0;
}