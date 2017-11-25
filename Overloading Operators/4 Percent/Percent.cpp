//X00110033
//Samir Kahvedzic

#include <iostream>
#include "Percent.h"
using namespace std;

Percent::Percent(int a) {
    percent = a;
}
Percent::~Percent() {

}
int Percent::getPercent() {
    return percent;
}

const Percent Percent::operator+(const Percent& rhs) {
    return Percent(percent + rhs.percent);
}
const Percent Percent::operator-(const Percent& rhs) {
    return Percent(percent - rhs.percent);
}
const Percent Percent::operator*(const Percent& rhs) {
    int a = percent/rhs.percent;
    return Percent(a);
}
istream& operator>>(istream& in, Percent& rhs){
    in >> rhs.percent;
    return in;
}
ostream& operator<<(ostream& out,  const Percent& rhs){
    out << rhs.percent;
    return out;
}

