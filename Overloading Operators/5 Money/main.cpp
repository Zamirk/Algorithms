//X00110033
//Samir Kahvedzic

#include <iostream>
#include "Money.h"

using namespace std;

int main() {
    Money a(5, 50);
    Money b(10, 50);
    Money ans(0,0);
    bool myAns = false;

    cout << "";
    cout << "Wallet A has " << a.getEuro() << " euro and " << a.getCent() << " cent." << endl;
    cout << "Wallet B has " << b.getEuro() << " euro and " << b.getCent() << " cent." << endl;
    cout << "" << endl;

    //Addition      {+}
    ans = a + b;
    cout <<"Addition: " << ans;

    //Subtraction   {-}
    ans = b - a;
    cout <<"Subtraction(b-a): " << ans;

    //Multiplication{*}
    ans = a * 2;
    cout <<"Multiplication: " << ans;

    //Division      {/}
    ans = b / 1.5;
    cout <<"Division(b/1.5): " << ans;

    //Less than     {<}
    myAns = a < b;
    cout <<"Less than: " << std::boolalpha <<myAns << endl;

    //Greater than  {>}
    myAns = a > b;
    cout <<"Greater than: " << std::boolalpha <<myAns << endl;

    //Equals to     {==}
    myAns = (a == b);
    cout <<"Equals to: " << std::boolalpha <<myAns << endl;

    system("pause");
    return 0;
}