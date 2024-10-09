#include "Integer.h"
#include "Vector2.h"


Integer::Integer() {

}
Integer::Integer(int A) : a(A) {

}


Integer Integer::operator+(const Integer& _right)
{
    Integer tmp(this->a + _right.a);
    return tmp;
}

Integer Integer::operator+=(const Integer& _right)
{
    Integer tmp(this->a += _right.a);
    return tmp;
}

Integer Integer::operator-(const Integer& _right)
{
    Integer tmp(this->a - _right.a);
    return tmp;
}

Integer Integer::operator-=(const Integer& _right)
{
    Integer tmp(this->a -= _right.a);
    return tmp;
}

Integer Integer::operator*(const Integer& _right)
{
    Integer tmp(this->a * _right.a);
    return tmp;
}

Integer Integer::operator*=(const Integer& _right)
{
    Integer tmp(this->a *= _right.a);
    return tmp;
}

Integer Integer::operator/(const Integer& _right)
{
    Integer tmp(this->a / _right.a);
    return tmp;
}

Integer Integer::operator/=(const Integer& _right)
{
    Integer tmp(this->a /= _right.a);
    return tmp;
}

Integer Integer::operator%(const Integer& _right)
{
    Integer tmp(this->a % _right.a);
    return tmp;
}

Integer Integer::operator%=(const Integer& _right)
{
    Integer tmp(this->a %= _right.a);
    return tmp;
}

Integer Integer::operator<<(const Integer& _right)
{
    Integer tmp(this->a << _right.a);
    return tmp;
}

void Integer::Pow(int int_exp) {
    int b = a;
    for (int i = 0; i < int_exp; i++) {
        a *= b;
    }
}
