- namespace的成员位于相同的作用域中，无须特殊符号可以访问，命名空间外访问需要域解析符::

```cpp
namespace mynamespace{
	// 该命名空间下的成员和函数
	...
}

```	
- using声明可以使一个namespace的成员在当前作用域下使用，不必使用域解析符
```cpp
 using namespace std;
 {
    cout << "cout可以不适用std::cout";
 } // namespace std
```
- 命名空间别名

	可以为命名空间长名起一个别名：
	```cpp
	namespace Glib = Graph_lib;
	```
