//
// Created by QsPlus on 2022/8/26.
//

#include <iostream>

using namespace std;

int main() {

    // 1.单精度 float
    // 如果小数后面不加 f 则这个小数默认表示位双精度，他会多进行一步转换为单精度。
    float testFloat = 3.1415926f;
    cout << "testFloat : " << testFloat << endl;
    // 统计 float 占用内存空间。
    cout << "float 占用内存空间为 : " << sizeof(testFloat) << endl;

    // 默认情况下，输出一个小数只会显示出六位有效数字。

    // 2.双精度 double
    float testDouble = 3.1415926;
    cout << "testDouble : " << testDouble << endl;
    // 统计 double 占用内存空间。
    cout << "double 占用内存空间为 : " << sizeof(testDouble) << endl;

    // 科学计数法。
    float number_1 = 3E2f; // 如果e后面是正数 3e2 = 3 * 10 ^ 2 (10 的二次方)
    cout << "number_1 : " << number_1 << endl;
    float number_2 = 3E-2f;  // 如果e后面是负数 3e-2 = 3 * 0.1 ^ 2 (0.1 的二次方)
    cout << "number_2 : " << number_2 << endl;

    return 0;
}