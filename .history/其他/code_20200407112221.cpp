#include <cassert>
#include <iostream>
using namespace std;
 
class Data
{
    char c;
};
class Data3
{
    char c;  // 偏移量在1
    int a; // 偏移量在4
    char c2; // 偏移量在9
    double d; // 偏移量在16
    // 整体为4的倍数
}; // 内存布局为 1 _ _ _ | 4 4 4 4 | 1 _ _ _ _ _ _ _ _ | 8 8 8 8 8 8 8 8 |
 
int main()
{
    unsigned int a = -1;
    cout << a;
    // cout << sizeof(Data) << endl; // 输出8
    // cout << sizeof(double) << endl;
}
