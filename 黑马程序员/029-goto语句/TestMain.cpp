//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // goto 语句（goto语句太过于强大所以一般不推荐使用，怕错误使用增加项目复杂度，来回跳跃执行）。

    cout << "这里是第 1 行代码。" << endl;
    goto FLAG;
    cout << "这里是第 2 行代码。" << endl;
    FLAG:
    cout << "这里是第 3 行代码。" << endl;
    return 0;
}