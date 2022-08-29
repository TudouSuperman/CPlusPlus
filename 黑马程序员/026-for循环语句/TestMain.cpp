//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // for 循环打印 0 - 9 这十个数字。

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    int i = 0;
    for (;;)
    {
        if (i >= 10)
        {
            break;
        }
        cout << i << endl;
        i++;
    }

    return 0;
}