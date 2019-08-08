# define
宏在编译时展开，将宏定义替换
```cpp
	#define FOREVER for(;;) //死循环
	#define CASE break;case 

避免使用的宏：

	#define PI 3.14
	
> 段落引用若必须使用宏，尽量用括号把宏参数括起来，全局名字一定要使用作用域解析符

	#define MIN(a, b) (((a)<(b))?(a):(b))
	
# enum hack
enum hack的行为某方面比较像`#define`而不像`const`，如对`enum`取址不合法；`enum`和`#define`一样绝不会导致非必要的内存分配；

	enum {value = 1};