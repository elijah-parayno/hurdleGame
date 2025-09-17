//
// Created by elija on 9/12/2025.
//

#include "getBoard.h"
using namespace std;

string getBoard(int &position, const vector<int> &obstacles) {
    string topRow = "B";
    string bottomRow = "X";

    for (int i = 0; i < 30; i++) {
        bool isObstacle = false;

        for (int j = 0; j < obstacles.size(); j++) {
            if (obstacles[j] == i) {
                isObstacle = true;
                continue;
            }
        }

        if (i == position) {
            topRow += "P";
        } else if (isObstacle) {
            topRow += "0";
        } else {
            topRow += " ";
        }

        bottomRow += "X";
    }

    topRow += "E";
    bottomRow += "X";

    return topRow + "\n" + bottomRow;
}


