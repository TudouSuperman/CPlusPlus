//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // break 的使用时机。
    // 1.出现在 switch 语句中。
    cout << "请输入副本难度。" << endl;
    cout << "1.普通" << endl;
    cout << "2.困难" << endl;
    cout << "3.炼狱" << endl;
    int select = 0;
    cout << "请开始输入：";
    cin >> select;
    switch (select)
    {
        case 1:
            cout << "你选择的是普通难度！" << endl;
            break;
        case 2:
            cout << "你选择的是困难难度！" << endl;
            break;
        case 3:
            cout << "你选择的是炼狱难度！" << endl;
            break;
    }

    // 2.出现在for循环中。
    for (int i = 0; i <= 3; ++i)
    {
        if (i == select)break;
        cout << "进入地图中..." << endl;
    }

    // 2.出现在嵌套循环中。
    for (int i = 0; i <= 3; ++i)
    {
        if (i == select)break;
        int progress = select;
        while (true)
        {
            if (progress-- <= 0)
            {
                break;
            }

            cout << "加载剩余游戏资源中..." << endl;
        }
    }

    return 0;
}