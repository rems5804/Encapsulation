#ifndef INTEGER_H__
#define INTEGER_H__


class Integer {


public:



    Integer();
    Integer(int A);

       int a;


    Integer operator+(const Integer& _right);
    Integer operator+=(const Integer& _right);

    Integer operator-(const Integer& _right);
    Integer operator-=(const Integer& _right);

    Integer operator*(const Integer& _right);
    Integer operator*=(const Integer& _right);

    Integer operator/(const Integer& _right);
    Integer operator/=(const Integer& _right);

    Integer operator%(const Integer& _right);
    Integer operator%=(const Integer& _right);

    Integer operator<<(const Integer& _right);

    void Pow(int int_exp);



    
};

#endif 