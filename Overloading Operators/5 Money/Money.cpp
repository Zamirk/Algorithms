//X00110033
//Samir Kahvedzic

#include <iostream>
#include "Money.h"
using namespace std;

Money::Money(int a, int b) {
    euro = a;
    cent = b;

    if(cent>99){
        while (cent>99){
            euro++;
            cent -= 100;
        }
    }
}
Money::~Money() {

}

int Money::getCent() {
    return cent;
}
int Money::getEuro() {
    return euro;
}
void Money::setCent(int a) {
    cent = a;
}
void Money::setEuro(int a) {
    euro = a;
}
void Money::dislay() {
    cout << "Euro" << euro << endl;
    cout << "Cent" << cent << endl;

}
const Money Money::operator+(const Money& rhs) {
    return Money(euro + rhs.euro, cent + rhs.cent);
}
const Money Money::operator-(const Money& rhs) {
    return Money(euro - rhs.euro, cent - rhs.cent);
}
const Money Money::operator*(int a) {
    return Money(euro * a, cent * a);
}
const Money Money::operator/(double a) {
    return Money(euro / a, cent / a);
}
bool operator<(const Money& a, const Money& b) {
    int totala, totalb;

    totala = (a.euro* 100) + a.cent;
    totalb = (b.euro* 100) + b.cent;

    if (totala < totalb) {
        return true;
    }
    return false;
}
bool operator>(const Money& a, const Money& b) {
    int totala, totalb;

    totala = (a.euro* 100) + a.cent;
    totalb = (b.euro* 100) + b.cent;

    if (totala > totalb) {
        return true;
    }
    return false;
}
bool operator==(const Money& a, const Money& b) {
    int totala, totalb;

    totala = (a.euro* 100) + a.cent;
    totalb = (b.euro* 100) + b.cent;

    if (totala == totalb) {
        return true;
    }
    return false;
}
std::ostream& operator<<(ostream& out, const Money& rhs) {
    out << "Euro: " << rhs.euro << ", Cent: " << rhs.cent << endl;
    return out;
}