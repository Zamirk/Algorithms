//X00110033
//Samir Kahvedzic

#include <iostream>
#include "bm.h"
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main() {
    string sampleText = "This is the sample text which will be searched.";
    string findThis = "text";
    bm myBm;
    map<char, int> map;

    cout << "Text: " << sampleText << endl;
    cout << "Key: " << findThis << endl;
    myBm.processString(findThis, map);

    cout << "Key found at index: " << myBm.returnPosition(sampleText, findThis, map) << "." << endl;

    system("pause");
    return 0;
}