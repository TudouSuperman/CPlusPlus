//
// Created by QsPlus on 2022/8/29.
//

# include "iostream"

using namespace std;

extern void TestArray_1();

extern void TestArray_2();

int main()
{
    TestArray_1();
    TestArray_2();

    return 0;
}

void TestArray_1()
{
    // 数组特点：
    // 1.放在一块连续的内存空间中。
    // 2.数组中的每个元素都是相同数据类型。
    // 3.如果初始化数据的时候没有填写全部数据，则剩余数据默认为0。
    // 4.定义数组的时候，必须有初始长度。

    // 创建数组的方式1：
    int testIntArray[3];
    testIntArray[0] = 0;
    testIntArray[1] = 1;
    testIntArray[2] = 2;
    // 访问数组元素 1。
    cout << testIntArray[0] << endl;
    cout << testIntArray[1] << endl;
    cout << testIntArray[2] << endl;

    // 创建数组的方式2：
    float testFloatArray[3] = {0.1f, 4.187f, 3.14f};
    // 访问数组元素 2。
    for (int i = 0; i < 3; i++)
    {
        cout << testFloatArray[i] << endl;
    }

    // 创建数组的方式3：（自动推断数组内元素的个数）
    short testShortArray[] = {0, 1, 2, 3, 4, 5};
    // 访问数组元素 3。
    for (int i = 0; i < 6; i++)
    {
        cout << testShortArray[i] << endl;
    }
}

void TestArray_2()
{
    // 数组名的用途。
    // 1.可以通过数组名统计整个数组占用内存大小。
    int testIntArray[6] = {0, 1, 2, 3, 4, 5};
    // int 占用 4 字节内存，数组内一共 6 个 int,总共占用 24 字节内存。（4 * 6）
    cout << "整个数组占用的内存空间为：" << sizeof(testIntArray) << endl;
    cout << "每个元素占用的内存空间为：" << sizeof(testIntArray[0]) << endl;
    cout << "整个数组中的元素的个数为：" << sizeof(testIntArray) / sizeof(testIntArray[0]) << endl;

    // 2.可以通过数组名查看数组首地址。
    cout << "数组的首地址为：" << testIntArray << endl;
    cout << "数组中第一个元素地址为：" << &testIntArray[0] << endl;
    // 第二个元素比第一个元素多了个 int 占用字节数，往后推移了 4 字节。
    cout << "数组中第二个元素地址为：" << &testIntArray[1] << endl;

    // 3.数组名是常量，不可以进行赋值操作。
    // testIntArray = 99;
}