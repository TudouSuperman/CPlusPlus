//
// Created by QsPlus on 2022/8/25.
//

#include <iostream>

using namespace std;

int main() {

    // 短整形。
    short numShort = sizeof(short);
    // 整形。
    int numInt = sizeof(int);
    // 长整形。
    long numLong = sizeof(long);
    // 长长整形。
    long long numLongLong = sizeof(long long);

    cout << "Short 所占字节 : " << numShort << endl;
    cout << "Int 所占字节 : " << numInt << endl;
    cout << "Long 所占字节 : " << numLong << endl;
    cout << "LongLong 所占字节 : " << numLongLong << endl;

    return 0;
}