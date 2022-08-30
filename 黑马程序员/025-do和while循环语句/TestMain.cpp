//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // while 循环打印 0 - 9 这十个数字。

    int value = 9;

    do
    {
        cout << value << endl;
    } while (value-- > 0);

    // do...while 与 while 的区别在于前者会多执行一次语句。

    return 0;
}