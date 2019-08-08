# define
宏在编译时展开，将宏定义替换

	#define FOREVER for(;;) //死循环
	#define CASE break;case 

避免使用的宏：
	    #define PI 3.14
	
	注意：若必须使用宏，尽量用括号把宏参数括起来，全局名字一定要使用作用域解析符
	   1 #define MIN(a, b) (((a)<(b))?(a):(b))
	
	enum hack
	enum hack的行为某方面比较像#define而不像const，如对enum取址不合法；enum和#define一样绝不会导致非必要的内存分配；
	    1 enum {value = 1};