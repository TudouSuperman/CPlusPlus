//
// Created by QsPlus on 2022/8/28.
//

# include "iostream"

using namespace std;

int main()
{
    // C++ 中除了 0 都为真。

    // ! 一个 ! 为假，两个 ！ 为真。
    cout << !!(1 == 1) << endl;

    // &&
    cout << ((1 == 1) && (1 == 2)) << endl;

    // ||
    cout << ((1 == 1) || (1 == 2)) << endl;

    return 0;
}