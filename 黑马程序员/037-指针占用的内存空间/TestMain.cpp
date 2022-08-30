//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

int main()
{
    // 指针在 32 位系统下都是占用 4 字，不管什么数据类型。
    // 指针在 64 位系统下都是占用 8 字节，不管什么数据类型。

    int testInt = 99;
    int *p = &testInt;

    cout << "p 指针占用内存为：" << sizeof(p) << endl;
    cout << "int * 指针占用内存为：" << sizeof(int *) << endl;
    cout << "float * 指针占用内存为：" << sizeof(float *) << endl;
    cout << "double * 指针占用内存为：" << sizeof(double *) << endl;
    cout << "char * 指针占用内存为：" << sizeof(char *) << endl;
    cout << "string * 指针占用内存为：" << sizeof(string *) << endl;
    cout << "bool * 指针占用内存为：" << sizeof(bool *) << endl;

    return 0;
}