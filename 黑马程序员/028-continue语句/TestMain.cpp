//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // continue 跳过本次循环。

    for (int i = 1; i <= 5; ++i)
    {
        if (i == 3) continue;
        cout << "我是第" << i << "次循环。" << endl;
    }

    return 0;
}