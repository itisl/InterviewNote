#include <cassert>
#include <iostream>
using namespace std;
 
class Data
{
    char c;
    int a;
};
 
int main()
{
    cout << sizeof(Data) << endl; // 输出8
    cout << sizeof(double) << endl;
}
