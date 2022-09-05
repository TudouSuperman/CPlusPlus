//
// Created by QsPlus on 2022/9/5.
//

#include <iostream>

using namespace std;

// 1.值传递（交换函数）。
void Swap(int a, int b);

// 2.地址传递（交换函数）。
void Swap(int *a, int *b);

// 3.引用传递（交换函数）。
void Swap(int &a, int &b, bool isReference);

int main()
{
    // 引用做函数参数：
    // 作用：函数传参时，可以利用引用的技术让形参修饰实参。
    // 优点：可以简化指针修改实参。

    int testInt_A = 99;
    int testInt_B = 88;

    // 1.值传递，本体不会改变。
    cout << "值传递" << endl;
    Swap(testInt_A, testInt_B);
    cout << "A : " << testInt_A << endl;
    cout << "B : " << testInt_B << endl;

    // 2.地址传递，本体会改变。
    cout << "地址传递" << endl;
    // 指针的话需要解引用。
    Swap(&testInt_A, &testInt_B);
    cout << "A : " << testInt_A << endl;
    cout << "B : " << testInt_B << endl;

    // 3.引用传递，本体会改变。
    cout << "引用传递" << endl;
    // 相当于形参 a 就是实参 testInt_A 的别名，存的是 testInt_A 的地址，所以会修改到本体。
    Swap(testInt_A, testInt_B, true);
    cout << "A : " << testInt_A << endl;
    cout << "B : " << testInt_B << endl;

    // 总结：通过引用参数产生的效果同指针按地址传递是一样的。引用的语法更清楚简单，相比指针少了一步解引用的操作。

    return 0;
}

void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(int &a, int &b, bool isReference)
{
    int temp = a;
    a = b;
    b = temp;
}