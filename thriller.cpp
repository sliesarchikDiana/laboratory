#include "thriller.h"
#include <iostream>
#include <string>
#include <utility>

thriller::thriller(): title("Unknown"), director("Unknown"), plot("Unknown"), runningTime(0), budget(0) {
    std::cout << "Default constructor was called for " << title << std::endl;
}

thriller::thriller(std::string  t, std::string  d, std::string  p, int rt, int b): title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    std::cout << "Parameterized constructor was called for " << title << std::endl;
}

// Copy constructor
thriller::thriller(const thriller& other) = default;

// Copy assignment operator
thriller& thriller::operator=(const thriller& other) = default;

// Destructor
thriller::~thriller() = default;

// Getters
std::string thriller::getTitle() const { return title; }
std::string thriller::getDirector() const { return director; }
std::string thriller::getPlot() const { return plot; }
int thriller::getRunningTime() const { return runningTime; }
int thriller::getBudget() const { return budget; }

// Setters
void thriller::setTitle(const std::string& newTitle) { title = newTitle; }
void thriller::setDirector(const std::string& newDirector) { director = newDirector; }
void thriller::setPlot(const std::string& newPlot) { plot = newPlot; }
void thriller::setRunningTime(int newRunningTime) {
    if (newRunningTime > 0) {
        runningTime = newRunningTime;
    }
}
void thriller::setBudget(int newBudget) {
    if (newBudget >= 0) {
        budget = newBudget;
    }
}
thriller::thriller(thriller&& other) noexcept
    : title(std::move(other.title)),
      director(std::move(other.director)),
      plot(std::move(other.plot)),
      runningTime(other.runningTime),
      budget(other.budget) {
    std::cout << "Move constructor was called for " << title << std::endl;
}
