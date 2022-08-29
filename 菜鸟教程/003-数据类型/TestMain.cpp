//
// Created by QsPlus on 2022/8/25.
//

#include <iostream>

using namespace std;

int main() {
    // 基础内置数据类型。
    cout << "C++ 布尔型 : " << "bool" << endl;
    cout << "C++ 字符型 : " << "char" << endl;
    cout << "C++ 整型 : " << "int" << endl;
    cout << "C++ 浮点型 : " << "float" << endl;
    cout << "C++ 双浮点型 : " << "double" << endl;
    cout << "C++ 无类型 : " << "void" << endl;
    cout << "C++ 宽字符型 : " << "wchar_t" << endl;

    // C++ 里一些基本类型可以使用一个或者多个类型修饰符进行修饰。
    // signed unsigned short long。
    signed long test1 = 0;
    unsigned long test2 = 0;
    long long test3 = 0;
    long int test4 = 0;
    signed long int test5 = 0;
    unsigned long int test6 = 0;

    // typedef 关键字。
    // 使用 typedef 可以为一个已有的类型取新的名。
    typedef int NewInt;
    typedef bool NewBool;
    typedef long long NewLongLong;

    NewInt testInt = 0;
    NewBool testBool = false;
    NewLongLong testLongLong = 0;

    cout << "NewInt : " << testInt << endl;
    cout << "NewBool : " << testBool << endl;
    cout << "NewLongLong : " << testLongLong << endl;

    // enum 枚举类型是 C++ 中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
    // 如果枚举没有初始化, 即省掉 " = 整型常数 " 时, 则从第一个标识符开始。
    enum TestEnum {
        TestEnum_1 = 0,
        TestEnum_2,
        TestEnum_3,
    } TestEnumType1;
    TestEnumType1 = TestEnum::TestEnum_2;
    cout << "TestEnumType1 : " << TestEnumType1 << endl;

    TestEnum TestEnumType2 = TestEnum_3;
    cout << "TestEnumType2 : " << TestEnumType2 << endl;

    return 0;
}