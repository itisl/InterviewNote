string类需要包含头文件`<string>`，以及命名空间`std`，其不同于C风格字符串，末尾没有`'\0'`，长度为真实长度
初始化：
```cpp
string s; //空字符串
string s = "C plus plus" ; //初始化，结尾没有'\0'
string s("C plus plus");
string s(5, 's'); //初始化成"sssss"
```
1. 原始字符串：用于正则表达式的字符串, 括号内就是原始的字符串，不需要用转义符号\
```cpp
string s = R"("hello")";
string s = R"***("hello"(()())***";  // )***"这一部分，)和"中间可以是任意符号，但是必须和"***(匹配
```
4. string类常用：
string.length()	字符串长度
string.size()
string.c_str()	转换为C风格字符串（例如打开文件时的路径）

"+""+="	和变量一样拼接字符串
插入字符串原型	string& insert(size_t pos,const string& str);//pos表示插入位置（下标），str为要插入字符串，可以是string，也可以是C风格，string.insert(5,"hello")
删除字符串原型	string& erase(size_t pos=0,size_t len=npos);//pos表示删除子字符串起始下标，len为长度，若不指明len，将删除到结束的所有字符，string.erase(5,3)。最多只能删除到字符串结尾，若pos越界会抛出异常
提取子字符串原型	string substr(size_t pos=0,size_t len=npos) const;//pos为要提取字符串起始下标,len为长度。string2=string1.substr(6,6)。pos越界会抛出异常，len越界会提取到结尾
字符串查找	size_t find(const string& str或char *s,size_t pos=0) const;//str为待查找字符串，pos为开始查找下标，若没找到返回无穷大值`INF`
rfind函数查找到pos处
string1.find_first_of(string2);//查找s2字符串和s1字符串共同具有的字符在字符串中首次出现的位置
将字符串转换为整数	stoi(str)
格式化字符串boost::format
