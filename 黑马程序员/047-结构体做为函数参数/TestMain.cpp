//
// Created by 石旗 on 2022/9/1.
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
} student;

// 2.值传递方式打印。
void PrintStudentInfo_1(struct Student _student)
{
    _student.age = 50;
    cout << "--值传递--" << endl;
    cout << "学生姓名：" << _student.name << endl;
    cout << "学生年龄：" << _student.age << endl;
    cout << "学生分数：" << _student.score << endl;
}

// 3.地址传递（引用传递）方式打印。
void PrintStudentInfo_2(struct Student *_p)
{
    _p->age = 100;
    cout << "--地址传递--" << endl;
    cout << "学生姓名：" << _p->name << endl;
    cout << "学生年龄：" << _p->age << endl;
    cout << "学生分数：" << _p->score << endl;
}

int main()
{
    student.name = "张三";
    student.age = 19;
    student.score = 77;

    // 值传递形参改变，实参不会变。
    // PrintStudentInfo_1(student);
    // 地址传递形参改变，实参也会改变。
    PrintStudentInfo_2(&student);

    cout << "--Main函数中打印--" << endl;
    cout << "学生姓名：" << student.name << endl;
    cout << "学生年龄：" << student.age << endl;
    cout << "学生分数：" << student.score << endl;

    // 总结：如果不想修改主函数中的数据，就用值传递，反之用地址传递。

    return 0;
}