# [STL索引](https://www.yuque.com/huihut/interview/stl_index)
# [STL详细文档](https://www.yuque.com/huihut/interview/stl_document)
## 字符串和整数
```c
atoi()
itoa()

```

### 随机数

整数和浮点数
```cpp
include <random>
const int l = 1;
const int r = 5;

std::mt19937 gen{std::random_device{}()};
std::uniform_int_distribution<> dis1(l, r);
std::uniform_real_distribution<> dis2(l, r);
// 整数
int a = dis1(gen);
// C语言方法
int a1 = rand()%(r - l + 1) + l;

// 浮点数
double b = dis2(gen);
```
