## 1. 字符串`<string.h>`

[链接](https://www.runoob.com/cprogramming/c-standard-library-stdlib-h.html)
| 序号 | 函数 & 描述                                                                                                                                                                                                                                 |
| ---- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1    | `void *memchr(const void *str, int c, size_t n)`<br>在参数 str 所指向的字符串的前 n 个字节中搜索第一次出现字符 c（一个无符号字符）的位置。                                                                                                  |
| 2    | `int memcmp(const void *str1, const void *str2, size_t n)`<br>把 str1 和 str2 的前 n 个字节进行比较。                                                                                                                                       |
| 3    | `void *memcpy(void *dest, const void *src, size_t n)`<br>从 src 复制 n 个字符到 dest。                                                                                                                                                      |
| 4    | `void *memmove(void *dest, const void *src, size_t n)`<br>另一个用于从 src 复制 n 个字符到 dest 的函数。                                                                                                                                    |
| 5    | `void *memset(void *str, int c, size_t n)`<br>复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。                                                                                                                          |
| 6    | `char *strcat(char *dest, const char *src)`<br>把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。                                                                                                                                      |
| 7    | `char *strncat(char *dest, const char *src, size_t n)`<br>把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。                                                                                                      |
| 8    | `char *strchr(const char *str, int c)`<br>在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。                                                                                                                         |
| 9    | `int strcmp(const char *str1, const char *str2)`<br>把 str1 所指向的字符串和 str2 所指向的字符串进行比较。                                                                                                                                  |
| 10   | `int strncmp(const char *str1, const char *str2, size_t n)`<br>把 str1 和 str2 进行比较，最多比较前 n 个字节。                                                                                                                              |
| 11   | `int strcoll(const char *str1, const char *str2)`<br>把 str1 和 str2 进行比较，结果取决于 LC_COLLATE 的位置设置。                                                                                                                           |
| 12   | `char *strcpy(char *dest, const char *src)`<br>把 src 所指向的字符串复制到 dest。                                                                                                                                                           |
| 13   | `char *strncpy(char *dest, const char *src, size_t n)`<br>把 src 所指向的字符串复制到 dest，最多复制 n 个字符。                                                                                                                             |
| 14   | `size_t strcspn(const char *str1, const char *str2)`<br>检索字符串 str1 开头连续有几个字符都不含字符串 str2 中的字符。                                                                                                                      |
| 15   | `char *strerror(int errnum)`<br>从内部数组中搜索错误号 errnum，并返回一个指向错误消息字符串的指针。                                                                                                                                         |
| 16   | `size_t strlen(const char *str)`<br>计算字符串 str 的长度，直到空结束字符，但不包括空结束字符。                                                                                                                                             |
| 17   | `char *strpbrk(const char *str1, const char *str2)`<br>检索字符串 str1 中第一个匹配字符串 str2 中字符的字符，不包含空结束字符。也就是说，依次检验字符串 str1 中的字符，当被检验字符在字符串 str2 中也包含时，则停止检验，并返回该字符位置。 |
| 18   | `char *strrchr(const char *str, int c)`<br>在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置。                                                                                                                      |
| 19   | `size_t strspn(const char *str1, const char *str2)`<br>检索字符串 str1 中第一个不在字符串 str2 中出现的字符下标。                                                                                                                           |
| 20   | `char *strstr(const char *haystack, const char *needle)`<br>在字符串 haystack 中查找第一次出现字符串 needle（不包含空结束字符）的位置。                                                                                                     |
| 21   | `char *strtok(char *str, const char *delim)`<br>分解字符串 str 为一组字符串，delim 为分隔符。                                                                                                                                               |
| 22   | `size_t strxfrm(char *dest, const char *src, size_t n)`<br>根据程序当前的区域选项中的 LC_COLLATE 来转换字符串 src 的前 n 个字符，并把它们放置在字符串 dest 中。                                                                             |
## 2. 标准库`<stdlib.h>`

序号 | 函数 & 描述
---|--------
1 | `double atof(const char *str)`<br>把参数 str 所指向的字符串转换为一个浮点数（类型为 double 型）。
2 | `int atoi(const char *str)<br>`<br>把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。
3 | `long int atol(const char *str)<br>`<br>把参数 str 所指向的字符串转换为一个长整数（类型为 long int 型）。
4 | `double strtod(const char *str, char **endptr)`<br>把参数 str 所指向的字符串转换为一个浮点数（类型为 double 型）。
5 | `long int strtol(const char *str, char **endptr, int base)`<br>把参数 str 所指向的字符串转换为一个长整数（类型为 long int 型）。
6 | `unsigned long int strtoul(const char *str, char **endptr, int base)`<br>把参数 str 所指向的字符串转换为一个无符号长整数（类型为 unsigned long int 型）。
7 | `void *calloc(size_t nitems, size_t size)`<br>分配所需的内存空间，并返回一个指向它的指针。
8 | `void free(void *ptr)`<br>释放之前调用 calloc、malloc 或 realloc 所分配的内存空间。
9 | `void *malloc(size_t size)`<br>分配所需的内存空间，并返回一个指向它的指针。
10 | `void *realloc(void *ptr, size_t size)`<br>尝试重新调整之前调用 malloc 或 calloc 所分配的 ptr 所指向的内存块的大小。
11 | `void abort(void)<br>`使一个异常程序终止。
12 | `int atexit(void (*func)<br>(void))`<br>当程序正常终止时，调用指定的函数 func。
13 | `void exit(int status)`<br>使程序正常终止。
14 | `char *getenv(const char *name)`<br>搜索 name 所指向的环境字符串，并返回相关的值给字符串。
15 | `int system(const char *string)`<br>由 string 指定的命令传给要被命令处理器执行的主机环境。
16 | `void *bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *))`<br>执行二分查找。
17 | `void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))`<br>数组排序。
18 | `int abs(int x)`<br>返回 x 的绝对值。
19 | `div_t div(int numer, int denom)`<br>分子除以分母。
20 | `long int labs(long int x)`<br>返回 x 的绝对值。
21 | `ldiv_t ldiv(long int numer, long int denom)`<br>分子除以分母。
22 | `int rand(void)`<br>返回一个范围在 0 到 RAND_MAX 之间的伪随机数。
23 | `void srand(unsigned int seed)`<br>该函数播种由函数 rand 使用的随机数发生器。
24 | `int mblen(const char *str, size_t n)`<br>返回参数 str 所指向的多字节字符的长度。

