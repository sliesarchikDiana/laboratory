#ifndef ACTION_H
#define ACTION_H
#include "movie.h"
#include <string>
#include <iostream>

class action : public movie {
private:
    int explosions{}; // Tracks the number of explosions in the action movie.

public:
    // Constructors
    action(); // Default constructor
    action(std::string title, std::string director, std::string plot, int runningTime, int budget, int explosions);
    action(const action& other); // Copy constructor
    action(action&& other) noexcept; // Move constructor

    // Destructor
    ~action() override;

    // Assignment operators
    action& operator=(const action& other); // Copy assignment operator
    action& operator=(action&& other) noexcept; // Move assignment operator

    // Getters and setters
    int getExplosions() const; // Retrieve the number of explosions
    void setExplosions(int newExplosions); // Update the number of explosions

    // Overriding method
    void displayDetails() const override; // Display details of the action movie
};

#endif // ACTION_H