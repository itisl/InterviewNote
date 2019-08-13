class Fraction
{
private:
    int numerator_; // 分子
    int denomirator_; // 分母
public:
    // 加上默认参数，构成单参数构造函数
    Fraction(int numerator, int denomirator=1)
    :numerator_(numerator), denomirator_(denomirator){ };
    
    Fraction operator+(){
        return Fraction(...);
    }
};

Fraction f(3, 5);
double d = 4 + f; // 调用构造函数将4转换为F(4,1), 然后调用operator+