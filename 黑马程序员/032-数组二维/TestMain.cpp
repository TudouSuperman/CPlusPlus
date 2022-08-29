//
// Created by QsPlus on 2022/8/29.
//

# include "iostream"

using namespace std;

extern void TestArray2_1();

extern void TestArray2_2();

int main()
{
    TestArray2_1();
    TestArray2_2();
    return 0;
}

void TestArray2_1()
{
    // 二维数组的定义：（推荐使用第二种方式定义二维数组）

    // 1.数据类型 数组名[行数][列数];
    int testIntArray_1[2][2];
    testIntArray_1[0][0] = 0;
    testIntArray_1[0][1] = 1;
    testIntArray_1[1][0] = 2;
    testIntArray_1[1][1] = 3;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << testIntArray_1[i][j] << " ";
        }
        cout << endl;
    }

    // 2.数据类型 数组名[行数][列数] = {{数据1,数据2},{数据3,数据4}};
    int testIntArray_2[2][2] = {{0, 1},
                                {1, 1}};
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << testIntArray_2[i][j] << " ";
        }
        cout << endl;
    }

    // 3.数据类型 数组名[行数][列数] = {数据1,数据2,数据3,数据4};
    int testIntArray_3[2][2] = {1, 2, 3, 4};
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << testIntArray_3[i][j] << " ";
        }
        cout << endl;
    }

    // 4.数据类型 数组名[][列数] = {数据1,数据2,数据3,数据4};
    // 程序可以自动推断出是几行，因为已经规定列数了。
    int testIntArray_4[][2] = {1, 2, 3, 4};
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << testIntArray_4[i][j] << " ";
        }
        cout << endl;
    }
}

void TestArray2_2()
{
    // 二维数组名称用途。
    // 1.可以查看占用内存空间大小。
    int testIntArray[2][2] = {1, 2, 3, 4};
    cout << "二维数组占用内存空间大小为：" << sizeof(testIntArray) << endl;
    cout << "二维数组第一行占用内存空间大小为：" << sizeof(testIntArray[0]) << endl;
    cout << "二维数组第一个元素占用内存空间大小为：" << sizeof(testIntArray[0][0]) << endl;
    cout << "二维数组行数为：" << sizeof(testIntArray) / sizeof(testIntArray[0]) << endl;
    cout << "二维数组列数为：" << sizeof(testIntArray[0]) / sizeof(testIntArray[0][0]) << endl;

    // 2.可以查看二维数组的首地址。
    cout << "二维数组首地址为：" << testIntArray << endl;
    cout << "二维数组第一行首地址为：" << testIntArray[0] << endl;
    cout << "二维数组第二行首地址为：" << testIntArray[1] << endl;
    cout << "二维数组第一行第一个元素的首地址为：" << &testIntArray[0][0] << endl;
    cout << "二维数组第一行第二个元素的首地址为：" << &testIntArray[0][1] << endl;
    cout << "二维数组第二行第一个元素的首地址为：" << &testIntArray[1][0] << endl;
    cout << "二维数组第二行第二个元素的首地址为：" << &testIntArray[1][1] << endl;
}