//
// Created by QsPlus on 2022/8/28.
//

#include "iostream"
#include <string>

using namespace std;

int main()
{
    // 1.整型。
    int testInt;
    cout << "请输入整型：" << endl;
    cin >> testInt;
    cout << "输入为：" << testInt << endl;

    // 2.浮点型。
    float testFloat;
    cout << "请输入浮点型：" << endl;
    cin >> testFloat;
    cout << "输入为：" << testFloat << endl;

    // 3.字符型。
    char testChar;
    cout << "请输入字符型：" << endl;
    cin >> testChar;
    cout << "输入为：" << testChar << endl;

    // 4.字符串型。
    string testString;
    cout << "请输入字符串型：" << endl;
    cin >> testString;
    cout << "输入为：" << testString << endl;

    // 5.布尔型（所有非 0 的值都代表 true）。
    bool testBool;
    cout << "请输入布尔型：" << endl;
    cin >> testBool;
    cout << "输入为：" << testBool << endl;

    return 0;
}