//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

// 结构体定义
struct Student
{
    // 姓名。
    string name;
    // 年龄。
    short age;
    // 分数。
    short score;
} s3;

int main()
{
    // 创建结构体变量方式 1
    struct Student s1;
    s1.name = "王二";
    s1.age = 21;
    s1.score = 99;
    cout << "姓名：" << s1.name << " - " << "年龄：" << s1.age << " - " << "分数：" << s1.score << endl;

    // 创建结构体变量方式 2
    struct Student s2 = {"张三", 20, 83};
    cout << "姓名：" << s2.name << " - " << "年龄：" << s2.age << " - " << "分数：" << s2.score << endl;

    // 创建结构体变量方式 3（定义的时候顺便创建结构体变量）（这种方式不推荐使用，因为写了很容易找不到位置）
    s3.name = "李四";
    s3.age = 19;
    s3.score = 79;
    cout << "姓名：" << s3.name << " - " << "年龄：" << s3.age << " - " << "分数：" << s3.score << endl;

    // 创建结构体变量方式 4（创建结构体的时候 struct 关键字可以省略）
    Student s4;
    s4.name = "麻子";
    s4.age = 29;
    s4.score = 45;
    cout << "姓名：" << s4.name << " - " << "年龄：" << s4.age << " - " << "分数：" << s4.score << endl;

    // 总结：定义结构体时的关键字是 struct 不可以省略。
    // 总结：创建结构体变量时，关键字 struct 可以省略。
    // 总结：结构体变量利用操作符 "." 访问成员。

    // enum 枚举类型是 C++ 中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
    // 如果枚举没有初始化, 即省掉 " = 整型常数 " 时, 则从第一个标识符开始。
    enum TestEnum
    {
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