1. vector作用
a. 封装任何类型的动态数组，自动创建、释放(只有调用析构函数时，无法随着大小动态释放)
b. 数组下标越界检查

2. vector对象的定义：vector<type> arr(len)
如：std::vector<int> a(n);//建立大小为n的int数组（vector）
std::vector<int> arr={1, 2, 3,};//arr{1,2,3}等价
std::vector<int> a;//空的vector，运行中动态改变大小
vector<int> a(10,1);//全初始化为1
Note:vector对象可以高效添加元素，在初始时设定大小可能效率更差
3. vector对象的使用：
头文件	#include<vector>
命名空间	using std::vector
元素的引用	和普通数组一样，arr[n]
数组长度	用size函数arr.size()
4. 其他vector操作：
v.push_back(i)	添加元素，把i放在arr尾端
v.pop_back()	删除最后一个元素
v.empty()	判断是否为空
v.size()	返回元素个数
v1 = v2	将v2拷贝到v1
v1 == v2	判断是否相等
!=,<,<=,>,>=	
v.clear()	令size = 0
v.shrink_to_fit()	将容器可存储空间缩小到size大小，可以配合clear动态释放内存

注意：不能在范围for循环中向vector对象添加元素，添加元素操作将会使迭代器失效
