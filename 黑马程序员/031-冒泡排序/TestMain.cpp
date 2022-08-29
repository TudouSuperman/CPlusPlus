//
// Created by QsPlus on 2022/8/29.
//

# include "iostream"

using namespace std;

int main()
{
    int testIntArray[] = {4, 5, 5, 2, 7, 8, 10, 9, 7, 32, 91, 60};

    for (int i = 0; i < 12 - 1; i++)
    {
        for (int j = 0; j < 12 - i - 1; ++j)
        {
            if (testIntArray[j] > testIntArray[j + 1])
            {
                int testInt = testIntArray[j];
                testIntArray[j] = testIntArray[j + 1];
                testIntArray[j + 1] = testInt;
            }
        }
    }

    for (int i = 0; i < 12; ++i)
    {
        cout << testIntArray[i] << endl;
    }

    return 0;
}