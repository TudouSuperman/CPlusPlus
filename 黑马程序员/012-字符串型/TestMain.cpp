//
// Created by QsPlus on 2022/8/28.
//

#include <iostream>
#include "string"

using namespace std;

int main()
{
    // 1.C 风格字符串。
    // 注意点：
    // 1.C 风格字符串 char 字符串名后面需要加上 [] 括号，字符数组。
    // 2.C 风格字符串等号后面要用双引号包含起来字符串。
    char charStr[] = "Hello Clion C++ QsPlus。";
    cout << charStr << endl;

    // 2.C++ 风格字符串。
    // 注意点：
    // 1.C++ 风格字符串需要加入头文件 #include "string"。
    string stringStr = "Hello Clion C++ QsPlus。";
    cout << stringStr << endl;

    return 0;
}