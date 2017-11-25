//X00110033
//Samir Kahvedzic

#include <iostream>
#ifndef UNTITLED5_MONEY_H
#define UNTITLED5_MONEY_H

class Money {
public:
    Money(int a, int b);
    ~Money();
    int getCent();
    int getEuro();
    void setMoney(int a, int b);
    void setEuro(int a);
    void setCent(int a);
    void dislay();
    const Money operator+(const Money& rhs);
    const Money operator-(const Money& rhs);
    const Money operator*(int a);
    const Money operator/(double a);
    friend bool operator<(const Money& a, const Money& b);
    friend bool operator>(const Money& a, const Money& b);
    friend bool operator==(const Money& a, const Money& b);
    friend std::ostream& operator<<(std::ostream& out, const Money& rhs);

private:
    int euro;
    int cent;
};


#endif //UNTITLED5_MONEY_H
