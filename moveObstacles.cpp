//
// Created by elija on 9/15/2025.
//

#include "moveObstacles.h"

#include <vector>
using namespace std;

void moveObstacles(vector<int> &obstaclePos, int round) {

    for (int i = 0; i < obstaclePos.size(); i++) {
        (obstaclePos[i])--;
    }

    if (round % 3 == 0) {
        obstaclePos.push_back(29);
    }
}
