#include <iostream>
#include <string>
using namespace std;

int main(){
    const int a=10;
    //定义一个指针变量
    int *p=NULL;
    //对a取地址
    p =(int*)&a;
    *p=20;
    cout<<a<<" "<<&a<<endl;
    cout<<*p<<' '<< p<<endl;
    return 0;
}
