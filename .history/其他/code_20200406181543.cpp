#include <cassert>
 
struct Base {}; // 空类
 
struct Derived1 : Base {
    int i;
};
 
int main()
{
    // 任何空类类型的对象大小至少为 1
    assert(sizeof(Base) > 0);
 
    // 应用空基类优化
    assert(sizeof(Derived1) == sizeof(int));
}
