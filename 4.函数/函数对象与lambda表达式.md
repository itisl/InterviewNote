
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

### 2. 仿函数
**仿函数**：实质上就是一个重载了`operator()`操作符的类，概念上是函数指针的功能。

> 1. 函数对象可以将附加数据保存在成员变量中，从而实现携带附加数据，而函数指针不行。
> 2. 将`operator()`设置为`inline`函数，可以提高速度
#### 实现：
函数对象在概念上偏向于函数，而不是类。标准风格应使用结构体`struct`。
```cpp
struct Output : public unary_function<int,void>{ //单目函数对象unary_function
    void operator()(int __n){
        cout<<__n<<" ";
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
#### 调用：
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
### 3. lambda表达式
//TODO

---