//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    int score = 0;
    cout << "请输入分数(1,2,3)：" << endl;
    cin >> score;

    switch (score)
    {
        case 1:
            cout << "1星好评！" << endl;
            break;
        case 2:
            cout << "2星好评！" << endl;
            break;
        case 3:
            cout << "3星好评！" << endl;
            break;
    }

    return 0;
}