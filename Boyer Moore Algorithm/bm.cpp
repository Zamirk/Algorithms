//X00110033
//Samir Kahvedzic
#include "bm.h"
#include <iostream>
#include <string>
#include <map>
#include <iterator>

void bm::processString(string &a, map<char, int> &map) {
    for (int i = 0; i < a.length(); i++) {
        //Mapping the characters
        map[a[i]] = i;
    }
};

int bm::returnPosition(string &key, string &sampleText, map<char, int> &myMap) {

    string temp = sampleText;
    map<char, int>::iterator iterator;
    int n = sampleText.size();
    bool notFound;

    //While it is less than the key
    while (n < key.length()) {
        
        if (temp.back() == key[n]) {
            n--;

            temp = temp.substr(0, temp.size() - 1);
            temp.back();
            int count = 0;
            int z = 0;

            //Second while loop
            while (z < sampleText.size() - 1) {
                if (temp.back() == key[n]) {
                    temp = temp.substr(0, temp.size() - 1);

                    count++;
                    n--;
                    if (count == sampleText.size() - 1) {
                        n++;
                        return n;
                    }
                } else {
                    temp = sampleText;
                    n = n + sampleText.size();
                }
                z++;
            }
        } else {
            notFound = true;

            for (iterator = myMap.begin(); iterator != myMap.end(); iterator++) {
                if (iterator -> first == key[n]) {
                    notFound = false;
                    n = n + (sampleText.size() - iterator->second - 1);
                }
            }

            if (notFound) {
                n = n + sampleText.size() - 1;
            }
        }
    }
    return -1;
};


