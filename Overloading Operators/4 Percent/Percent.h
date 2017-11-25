//X00110033
//Samir Kahvedzic

#include <iostream>
#ifndef UNTITLED5_MONEY_H
#define UNTITLED5_MONEY_H

class Percent {
public:
    Percent(int a);
    ~Percent();
    int getPercent();

    friend bool operator ==(const Percent& first, const Percent& second);
    friend bool operator <(const Percent& first, const Percent& second);
    friend std::istream& operator >>(std::istream& inputStream, Percent& aPercent);
    friend std::ostream& operator <<(std::ostream& outputStream, const Percent& aPercent);

    const Percent operator+(const Percent& rhs);
    const Percent operator-(const Percent& rhs);
    const Percent operator*(const Percent& rhs);

    //friend bool operator<(const Money& a, const Money& b);
    //friend bool operator>(const Money& a, const Money& b);
    //friend bool operator==(const Money& a, const Money& b);
private:
    int percent;
};

#endif //UNTITLED5_MONEY_H
