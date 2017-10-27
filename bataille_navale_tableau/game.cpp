#include <stdlib.h>
#include <iostream>
#include "battleship.h"


using namespace std;






int main() {
    cout << "BATTLESHIP" << endl;
    Battleship p1(false), p2(true);

    int N = 3;

    while(true) {
//        N--;
        cout << "Player 1 playing!" << endl;
        cout << "Player 2 grid:" << endl;
        p2.display();
        if(p1.shot(p2)) {
            cout << "Player 1 wins" << endl;
            break;
        }

        cout << "\n\nPlayer 2 playing!" << endl;
        cout << "Player 1 grid:" << endl;
        p1.display();
        if(p2.shot(p1)) {
            cout << "Player 2 wins" << endl;
            break;
        }
    }

    return 0;
}
