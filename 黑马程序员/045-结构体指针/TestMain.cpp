//
// Created by QsPlus on 2022/8/31.
//

#include <iostream>

using namespace std;

// 1.定义结构体。
struct Student
{
    // 姓名。
    string name;
    // 年龄。
    short age;
    // 分数。
    short score;
};

int main()
{
    // 2.创建结构体变量（结构体定义前面可以不写 struct）。
    Student testStudent = {"张三", 21, 78};

    // 3.通过指针指向结构体变量（结构体地址需要结构体指针接收）。
    struct Student *p = &testStudent;

    // 4.通过指针访问结构体变量中的数据。
    cout << "姓名：" << p->name << endl;
    cout << "年龄：" << p->age << endl;
    cout << "分数：" << p->score << endl;

    // 如果想通过结构体指针来访问结构体中的属性，需要利用 '->' 符号。

    return 0;
}