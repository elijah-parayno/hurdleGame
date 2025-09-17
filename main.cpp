#include <iostream>
#include <vector>
#include "getBoard.h"
#include "movePlayer.h"

using namespace std;

int main() {

    int position = 0;
    char button;
    vector<int> obstacles;
    int round = 0;

    while (true) {

        round++;

        cout << getBoard(position, obstacles) << endl;
        cout << "\n->> ";
        cin >> button;

        if (button == 'a' || button == 'd' || button == 'f') {
            movePlayer(button, position);
        } else {
            cout << "Invalid input. Try again.\n";
            continue;
        }

        moveObstacles(obstacles, round);

        for (int i = 0; i < obstacles.size(); i++) {
            if (position == 29) {
                cout << getBoard(position, obstacles) << "\n";
                cout << "You win!\n";
                break;
            } else if ((obstacles[i]) == position) {
                cout << getBoard(position, obstacles) << "\n";
                cout << "You collided with an obstacle! Try again next time.\n";
                return 0;
            }
        }

    }

    return 0;
}
