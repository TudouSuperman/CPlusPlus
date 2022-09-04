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
};

// 将函数中的形参改为地址传递指针的方式，可以减少内存时间，
// 因为一个指针只占用 4 字节，如果结构体中数据量大的话就就推荐使用指针的方式，
// 而且不会复制一个副本出来（值传递会复制一个副本传递过来，所以修改行参不会改变到实参）。
// 值传递数据有多大就会复制副本传递有多大，地址传递指针只占用4字节。
void PrintStudentInfo(const struct Student *_p)
{
    // _p->age = 100; // 加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作。
    cout << "学生姓名：" << _p->name << endl;
    cout << "学生年龄：" << _p->age << endl;
    cout << "学生分数：" << _p->score << endl;
}

int main()
{
    struct Student testStudent = {"张三", 18, 78};
    PrintStudentInfo(&testStudent);

    cout << "--Main函数中打印--" << endl;
    cout << "学生姓名：" << testStudent.name << endl;
    cout << "学生年龄：" << testStudent.age << endl;
    cout << "学生分数：" << testStudent.score << endl;

    return 0;
}