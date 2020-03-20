## 字符串和整数
```
atoi()
itoa()

```

## 数据结构

### 数组
### 链表
### 栈
### 队列
### 堆
### 哈希表


## 数学
### 随机数

整数和浮点数
```cpp
include <random>
std::mt19937 gen{std::random_device{}()};
std::uniform_int_distribution<> dis1(1, 5);
std::uniform_real_distribution<> dis2(1, 5);
int a = dis1(gen);
double b = dis2(gen);
```
