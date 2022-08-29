//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

// 声明一个求最大值的函数。
// 声明函数是为了提前告诉编译器函数的存在，
// 因为编译器是从上到下执行的，
// 如果函数在上面执行到了定义在下面的函数会报错，
// 如果把函数定义在上面的话执行到下面的时候就能访问到那个函数了。
int TestMaxFunction(int number1, int number2);

int main()
{
    // 调用定义的函数。
    int max = TestMaxFunction(50, 100);
    cout << "结果为：" << max << endl;

    return 0;
}

// 函数的声明可以写多个，但是定义只能写一个（声明是为了告诉编译器这个东西存在，定义是为了告诉编译器这个东西到底该怎么写）。
// 定义声明过的求最大值的函数。
int TestMaxFunction(int number1, int number2)
{
    return number1 > number2 ? number1 : number2;
}