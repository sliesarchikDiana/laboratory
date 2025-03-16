#include <iostream>
#include <string>
#include "blockbuster.h"
#include "sciFy.h"
#include "romCom.h"
#include <thriller.h>
#include <utility>
using namespace std;

int main() {
    string greeting = "Test begin";
    cout << greeting << endl;

    blockbuster avengers("Avengers: Endgame", "Brothers Russo", "Superheroes save the planet", 181, 356000000);
    blockbuster defaultBlockbuster;

    sciFy alien("Alien", "Ridley Scott", "A spaceship crew is stalked by an alien", 117, 11000000);
    sciFy defaultSciFy;

    romCom sweetHomeAlabama("Sweet Home Alabama", "Andy Tennant", "A woman must choose between two loves.", 108, 30000000);
    romCom defaultRomCom;

    thriller silenceOfLambs("The Silence of the Lambs", "Jonathan Demme","FBI cadet must receive help from a cannibal to catch another serial killer.", 118, 19000000);
    thriller defaultThriller;


    thriller originalThriller("Inception", "Christopher Nolan", "A mind-bending heist within dreams", 148, 160000000);
    thriller movedThriller(std::move(originalThriller));

    std::cout << "Moved Thriller Title: " << movedThriller.getTitle() << std::endl;
    return 0;
}
