//
// Created by QsPlus on 2022/8/29.
//

#include <iostream>

using namespace std;

// 冒泡排序（数组的首地址，数组长度）
void BubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void PrintArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " - ";
    }
}

int main()
{
    // 1.初始数组。
    int testArray[] = {1, 2, 5, 6, 32, 7, 8, 4, 17, 8, 9, 23};
    // 2.数组长度。
    int testArrayLen = sizeof(testArray) / sizeof(testArray[0]);
    // 3.冒泡排序（传递的是指针）。
    BubbleSort(testArray, testArrayLen);
    // 4.循环遍历输出结果。
    PrintArray(testArray, testArrayLen);

    return 0;
}