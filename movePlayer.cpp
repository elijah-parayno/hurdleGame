//
// Created by elija on 9/12/2025.
//

#include "movePlayer.h"
#include <iostream>
#include <string>
using namespace std;


void movePlayer(char input, int& position) {
    if (input == 'a' && position > 0) {
        position--;
    } else if (input == 'd' && position < 29) {
        position++;
    } else if (input == 'f' && position < 28) {
        position ++;
        position ++;
    }else {
        position++;
    }
}
