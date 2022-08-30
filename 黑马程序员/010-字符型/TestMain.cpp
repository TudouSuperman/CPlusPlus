//
// Created by QsPlus on 2022/8/26.
//

#include <iostream>

using namespace std;

int main()
{

    // char 是值类型可以用来存数字（既是数字也是字符的原因是，字符底层 ASCII 编码可以转成值）
    // 就好比 Unity Encoding.UTF8.GetBytes 一样，把字符串转换为字节数组。
    char testNumber = 99;
    char testChar = 'C';

    // 1.字符型变量的创建方式。
    char c = 'C';
    cout << "char 的值 :" << c << endl;

    // 2.字符型变量所占用的内存大小。
    cout << "char 占用的内存 :" << sizeof(c) << endl;

    // 3.字符型变量常见错误。
    // char testChar_1 = "C"; // 创建字符型变量要使用单引号。
    // char testChar_2 = 'Char'; // 创建字符型变量单引号只能有一个字符。

    // 4.字符型变量对应的 ASCII 编码。
    // 可以把 A a 的 ASCII 编码记住，这样就可以根据这两个数推算其他字母的编码。（a = 97,b = 98,c = 99）
    // A ASCII = 65。
    // a ASCII = 97。
    // 把 字符型变量 c 所包含的值 C 强转换为值类型，输出 C 的 ASCII 编码。
    cout << "C 的 ASCII 编码为 :" << (int) c << endl;
    cout << "A 的 ASCII 编码为 :" << (int) 'A' << endl;
}