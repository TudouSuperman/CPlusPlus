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
    // 2.创建结构体数组。
    struct Student testStudentArray[3] = {
            {"王二", 18, 93},
            {"张三", 21, 78},
            {"李四", 19, 80},
    };

    // 3.给结构体数组中的元素赋值。
    testStudentArray[2].name = "赵六";
    testStudentArray[2].age = 30;
    testStudentArray[2].score = 60;

    // 4.遍历结构体数组。
    for (int i = 0; i < 3; i++)
    {
        cout << "名字：" << testStudentArray[i].name << endl;
        cout << "年龄：" << testStudentArray[i].age << endl;
        cout << "分数：" << testStudentArray[i].score << endl;
    }

    return 0;
}