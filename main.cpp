#include <iostream>
#include <string>
#include "blockbuster.h"
#include "sciFy.h"
#include "romCom.h"
using namespace std;

int main() {
    string greeting = "Test begin";
    cout << greeting << endl;
    blockbuster avengers("Avengers: Endgame", "Russo", "Superheroes save the planet", 181, 356000000);
    blockbuster defaultBlockbuster;
    sciFy alien("Alien", "Ridley Scott", "A spaceship crew is stalked by an alien", 117, 11000000);
    sciFy defaultSciFy;
    romCom sweetHomeAlabama("Sweet Home Alabama", "Andy Tennant", "A woman must choose between two loves.", 108, 30000000);
    romCom defaultRomCom;
    return 0;
}
