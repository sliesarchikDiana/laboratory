#include <iostream>
/*
 #include <string>
#include "action.h"
#include "sciFy.h"
#include "romance.h"
#include "thriller.h"
*/
#include "terminal_interface.h"
using namespace std;

int main() {
    cout << "Test begin"<< endl;
    TerminalInterface interface;
    interface.run();
    /*
    action movie1("Fast X", "Director", "Plot", 120, 200000000, 50);
    action movie2;
    movie2 = movie1;

    movie2.displayDetails();
    std::cout<<endl;
    action avengers("Avengers: Endgame", "Brothers Russo", "Superheroes save the planet", 181, 356000000, 20);
    avengers.addActor("Robert Downey Jr.");
    avengers.addActor("Chris Evans");
    avengers.addActor("Mark Ruffalo");
    avengers.addActor("Chris Hemsworth");
    avengers.addActor("Scarlett Johansson");
    avengers.displayDetails();
    std::cout<<endl;
    action defaultAction;
    std::cout<<endl;
    action fastAndFurious("Fast and Furious", "Justin Lin", "Street racing and heists", 130, 200000000, 25);
    fastAndFurious.addActor("Vin Diesel");
    fastAndFurious.addActor("Paul Walker");
    fastAndFurious.addActor("Dwayne Johnson");
    fastAndFurious.displayDetails();
    std::cout<<endl;
    std::cout<<"The time needed to watch the movies "<<avengers+fastAndFurious<<" minutes"<<endl;
    std::cout<<endl;


    std::cout << std::endl;
    avengers.displayDetails();
    std::cout << std::endl;
    defaultAction.displayDetails();

    std::cout<<std::endl << "Movies count: " << action::getObjectCount() << std::endl;
    std::cout << std::endl;

    sciFy alien("Alien", "Ridley Scott", "A spaceship crew is stalked by an alien", 117, 11000000, TimePeriod::SpaceAge);
    sciFy defaultSciFy;

    std::cout << std::endl;
    alien.displayDetails();
    std::cout << std::endl;
    defaultSciFy.displayDetails();

    std::cout<<std::endl << "Movies count: " << sciFy::getObjectCount() << std::endl;
    std::cout << std::endl;
    romance sweetHomeAlabama("Sweet Home Alabama", "Andy Tennant", "A woman must choose between two loves.", 108, 30000000, true);
    romance laLaLand("La La Land", "Damien Chazelle", "A jazz pianist and actress fall in love while pursuing dreams in Los Angeles.",128, 30000000, false);
    romance defaultRomance;


    std::cout << std::endl;
    sweetHomeAlabama.displayDetails();
    std::cout << std::endl;
    laLaLand.displayDetails();
    std::cout << std::endl;
    defaultRomance.displayDetails();


    std::cout<<std::endl << "Movies count: " << action::getObjectCount() << std::endl;
    std::cout << std::endl;

    thriller silenceOfLambs("The Silence of the Lambs", "Jonathan Demme","FBI cadet must receive help from a cannibal to catch another serial killer.", 118, 19000000, false);
    thriller defaultThriller;
    thriller frankenweenie("Frankenweenie","Tim Burton","A boy revives his dog in a science experiment, leading to unexpected consequences.",87,39,true);
    auto* originalThriller = new thriller("Inception", "Christopher Nolan", "A mind-bending heist within dreams", 148, 160000000, false);
    thriller movedThriller(std::move(*originalThriller));
    delete originalThriller;
    std::cout << std::endl;


    std::cout << std::endl;
    silenceOfLambs.displayDetails();
    std::cout << std::endl;
    defaultThriller.displayDetails();
    std::cout << std::endl;
    frankenweenie.displayDetails();
    std::cout << std::endl;
    movedThriller.displayDetails();

    std::cout << "Moved Thriller Title: " << movedThriller.getTitle() << std::endl;
    std::cout << std::endl;

    const thriller se7en("Se7en", "David Fincher", "Detectives track down a serial killer who uses deadly sins as motives.", 127, 33000000, false);
    std::cout << std::endl;

    std::cout << std::endl;
    se7en.displayDetails();
    std::cout << std::endl;

    std::cout<<std::endl << "Movies count: " << action::getObjectCount() << std::endl;
    std::cout << std::endl;

   thriller myThriller;
    std::cin >> myThriller;
    std::cout << myThriller;

   std::cout << "Total Running Time: " << alien + avengers << " minutes" << std::endl;
    */
    return 0;
}