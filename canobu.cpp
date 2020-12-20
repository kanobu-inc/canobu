#include <iostream>
#include "canobu.h"

using namespace std;

int main(){
    Canobu game;

    game.logo();
    game.enter();

    cout << game.game() << endl;

    return 0;
}
