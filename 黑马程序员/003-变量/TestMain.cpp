//
// Created by QsPlus on 2022/8/25.
//

#include <iostream>

using namespace std;

int main()
{
    // 变量其实只不过是程序可操作的存储区的名称。
    // C++ 中每个变量都有指定的类型，类型决定了变量存储的大小和布局，该范围内的值都可以存储在内存中，运算符可应用于变量上。
    // 变量的名称可以由字母、数字和下划线字符组成。
    // 它必须以字母或下划线开头。
    // 大写字母和小写字母是不同的，因为 C++ 是大小写敏感的。
    cout << "bool 的储存值 true 或 false。" << endl;
    cout << "char 通常是一个字符（八位）。这是一个整数类型。" << endl;
    cout << "int 对机器而言，整数的最自然的大小。" << endl;
    cout << "float 单精度浮点值。单精度是这样的格式，1位符号，8位指数，23位小数。" << endl;
    cout << "double 双精度浮点值。双精度是1位符号，11位指数，52位小数。" << endl;
    cout << "void 表示类型的缺失。" << endl;
    cout << "wchar_t 宽字符类型。" << endl;

    // C++ 也允许定义各种其他类型的变量，比如枚举、指针、数组、引用、数据结构、类等等。
    // 这里定义的变量 i,j,c,f,d... 指示编译器创建类型为 int char float double 的名为 i,j,c,f,d... 的变量。
    int i = 0, j = 0;
    char c = 'c', h = 'h';
    float f = 0, fl = 3.1415f;
    double d = 99;

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

    // 变量可以在声明的时候被初始化（指定一个初始值）。初始化器由一个等号，后跟着一个常量表达式组成。
    // 变量的定义。
    int testInt;
    // 实际初始化
    testInt = 3;
    cout << "testInt : " << testInt << endl;

    // 左值与右值。
    // = 号左边的值是左值，左值也可以出现在 = 号的右边。
    // = 号右边的值是右值，右值不可能出现在 = 号的左边。
    // 左值 = (左值/右值)
    // int a,b;
    // a(左值) = 0(右值)。
    // a(左值) = b(左值)。
    // 左值（lvalue）：指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。
    // 右值（rvalue）：术语右值（rvalue）指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。
    // 变量是左值，因此可以出现在赋值号的左边。数值型的字面值是右值，因此不能被赋值，不能出现在赋值号的左边。

    return 0;
}