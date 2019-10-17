
## 函数对象：
**函数对象**(FunctionObject)类型是可用在函数调用运算符左侧的对象的类型

---
### 1. 函数指针
**函数指针**：不同于函数或函数的引用，函数指针是对象，从而能存储于数组、被复制、被赋值等。
```cpp
void f(int);
void (*p1)(int) = &f;
void (*p2)(int) = f; // 与 &f 相同
```

### 2. 仿函数(functor)
**仿函数**：实质上就是一个重载了`operator()`操作符的类，概念上是函数指针的功能。

> 1. 函数对象可以将附加数据保存在成员变量中，从而实现携带附加数据，而函数指针不行。
> 2. 将`operator()`设置为`inline`函数，可以提高速度

函数对象在概念上偏向于函数，而不是类。标准风格应使用结构体`struct`。
`unary_function`, `binary_function`与适配器兼容的一元函数、二元函数基类(C++11 中弃用)(C++17 中移除)
 


```cpp
struct Output{
    void operator()(int __n){
        cout << __n << " ";
    }
};
int main(){
    vector<int> v(5,100);//初始化vector，5个元素，元素值均为100
    //依次输出vector的元素，这里传入的不是函数指针，而是一个类
    for_each(v.begin(),v.end(),Output());
return 0;
}

// STL中for_each()函数可能实现：
template<class InputIt, class UnaryFunction>
UnaryFunction for_each(InputIt first, InputIt last, UnaryFunction f)
{
    for (; first != last; ++first) {
        f(*first);
    }
    return f; // C++11 起隐式移动
}
```
#### 仿函数的使用
1. 函数中的调用：
    ```cpp
    int main(){
        vector<int> v(5,100);//初始化vector，5个元素，元素值均为100
    //依次输出vector的元素，这里传入的不是函数指针，而是一个类
        for_each(v.begin(),v.end(),Output());  //这里的函数对象参数是output()
        return 0;
    }
    ```
2. 类名直接调用
    ```cpp
    Output()(100); //输出100
    ```

3. 类的对象调用
    ```cpp
    Output obj();
    obj(100);
    ```
### 3. `lambda`表达式
#### `lambda`表达式的作用：
> 1. 函数指针和仿函数较复杂，`lambda`表达式简洁，不需要实现类
> 2. 匿名内包的形式不会产生多余的函数名
> 3. 代码表达能力强，提高代码清晰度
#### `lambda`的形式
> `[&a, b](int i) mutable{}noexcept -> int`

最简单形式为`[]{}`
> 1. `[]`捕获列表，指明环境中哪些名字能用在`lambda`作用域内，以`&`为前缀的局部名字通过引用捕获，否则以值捕获
>   `[=]`值隐式捕获
>   `[&]`引用隐式捕获，所以局部变量都能捕获，通过引用访问
>   `[捕获列表]`显示捕获，只捕获列表中变量
>   `[&, 捕获列表]`捕获列表可以出现`this`，不能使用`&`; 不在列表中的变量引用隐式捕获
>   `[=, 捕获列表]`捕获列表不可以出现`this`，必须使用`&`; 不在列表中的变量值隐式捕获
> 2. `()`参数列表，`lambda`函数所需参数，可选
> 3. `mutable`可选，可能会修改通过值捕获的变量的状态(不是通过引用捕获的变量的状态)
> 4. `noexcept`可选，`lambda`不会发出异常
> 5. `->`尾置类型，可选，声明返回的类型
#### `lambda`与`this`
`lambda`用在成员函数，把`this`添加到捕获列表，`[this]`通过指针访问，而非拷贝。`[this]`和`[=]`不兼容，所以在多线程中可能产生竞争。
1. lambda表达式类型: std::function<R()>
可以赋值给函数指针, R为返回类型
a. 给lambda起名字
auto name = [&](){...};
b. 赋值给函数指针(捕获列表必须为空)
int (*p)(int) = [](int a){return a+1};
c. 递归：使用递归函数之前必须知道函数返回类型
function<void(char *b, char *e)> rev = [&](char *b, char *e){
    if(b-e>1){swap(*b,*--e); rev(++b, e);}
} // 用来逆序char[]字符串
5. 捕捉表达式（定义的是变量，不是函数，lambda需要有返回值）
// 利用表达式捕获，可以更灵活地处理作用域内的变量
int x = 4;
auto y = [&r = x, x = x + 1] { r += 2; return x * x; }();
// 此时 x 更新为6，y 为25
// 直接用字面值初始化变量，此时z是const char* 类型，不是函数
auto z = [str = "string"]{ return str; }();

6. 泛型lambda（和模板一样，参数类型自动推断）
auto add = [](auto x, auto y) { return x + y; };
int x = add(2, 3);   // 5
double y = add(2.5, 3.5);  // 6.0

---