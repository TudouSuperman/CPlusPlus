//
// Created by QsPlus on 2022/8/31.
//

#include <iostream>

using namespace std;

// 1.定义学生结构体。
struct Student
{
    // 姓名。
    string name;
    // 年龄。
    short age;
    // 分数。
    short score;
};

// 2.定义教师结构体。
struct Teacher
{
    // 编号。
    short id;
    // 姓名。
    string name;
    // 年龄。
    short age;
    // 学生。
    Student student;
};

int main()
{
    // 2.创建教师结构体变量（结构体定义前面可以不写 struct）。
    Teacher testTeacher;
    testTeacher.id = 1001;
    testTeacher.name = "老王";
    testTeacher.age = 34;
    testTeacher.student.name = "张三";
    testTeacher.student.age = 19;
    testTeacher.student.score = 77;

    // 3.访问数据。
    cout << "教师编号：" << testTeacher.id << endl;
    cout << "教师姓名：" << testTeacher.name << endl;
    cout << "教师年龄：" << testTeacher.age << endl;
    cout << "教师学生姓名：" << testTeacher.student.name << endl;
    cout << "教师学生年龄：" << testTeacher.student.age << endl;
    cout << "教师学生分数：" << testTeacher.student.score << endl;

    // 总结：结构体中可以定义另一个结构体作为成员，来解决问题。

    return 0;
}