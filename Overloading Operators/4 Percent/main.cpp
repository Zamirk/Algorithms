//X00110033
//Samir Kahvedzic

#include <iostream>
#include "Percent.h"

using namespace std;

int main() {
    Percent a(10);
    Percent b(10);
    Percent ans(0);

    cout << "Percent A is " << a.getPercent() << " percent." << endl;
    cout << "Percent B is " << b.getPercent() << " percent." << endl;
    cout << "" << endl;

    //Addition      {+}
    ans = a + b;
    cout <<"Addition: " << ans << endl;

    //Subtraction   {-}
    ans = b - a;
    cout <<"Subtraction(b-a): " << ans << endl;

    //Multiplication{*}
    ans = a * b;
    cout <<"Multiplication (10% of 10%): " << ans << endl;

    system("pause");
    return 0;
}