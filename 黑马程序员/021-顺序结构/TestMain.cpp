//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    int score = 0;
    cout << "请输入分数：" << endl;
    cin >> score;

    if (score >= 90)
    {
        cout << "分数优秀！" << endl;
    } else if (score >= 60)
    {
        cout << "分数及格！" << endl;
    } else
    {
        cout << "分数不及格！" << endl;
    }

    return 0;
}