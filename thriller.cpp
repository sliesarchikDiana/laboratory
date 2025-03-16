#include "thriller.h"
#include <iostream>
#include <string>
#include <utility>
int thriller::count = 0;
thriller::thriller(): title("Unknown"), director("Unknown"), plot("Unknown"), runningTime(0), budget(0) {
    ++count;
    std::cout << "Default constructor was called for " << this->title << std::endl;
}
thriller::thriller(std::string t, std::string d, std::string p, int rt, int b): title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    ++count;
    std::cout << "Parameterized constructor was called for " << this->title << std::endl;
}

// Copy constructor
thriller::thriller(const thriller& other) = default;
// Copy assignment operator
thriller& thriller::operator=(const thriller& other) = default;
// Destructor
thriller::~thriller() {
    --count;
}


std::string thriller::getTitle() const { return this->title; }
std::string thriller::getDirector() const { return this->director; }
std::string thriller::getPlot() const { return this->plot; }
int thriller::getRunningTime() const { return this->runningTime; }
int thriller::getBudget() const { return this->budget; }


void thriller::setTitle(const std::string& newTitle) { this->title = newTitle; }
void thriller::setDirector(const std::string& newDirector) { this->director = newDirector; }
void thriller::setPlot(const std::string& newPlot) { this->plot = newPlot; }
void thriller::setRunningTime(int newRunningTime) {
    if (newRunningTime > 0) {
        this->runningTime = newRunningTime;
    }
}
void thriller::setBudget(int newBudget) {
    if (newBudget >= 0) {
        this->budget = newBudget;
    }
}

thriller::thriller(thriller&& other) noexcept
    : title(std::move(other.title)),
      director(std::move(other.director)),
      plot(std::move(other.plot)),
      runningTime(other.runningTime),
      budget(other.budget) {
    ++count;
    std::cout << "Move constructor was called for " << this->title << std::endl;
}
int thriller::getObjectCount() { return count; }
