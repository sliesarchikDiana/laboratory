#include "thriller.h"
#include <iostream>
#include <string>
#include <utility>
int thriller::count = 0;

thriller::thriller(): title("Unknown thriller"), director("Unknown"), plot("Unknown"), runningTime(0), budget(0) {
    ++count;
    std::cout << "Default constructor was called for " << this->title<<" of class thriller" << std::endl;
}
thriller::thriller(std::string t, std::string d, std::string p, int rt, int b): title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    ++count;
    std::cout << "Parameterized constructor was called for " << this->title<<" of class thriller" << std::endl;
}

// Copy constructor
thriller::thriller(const thriller& other) = default;
// Copy assignment operator
thriller& thriller::operator=(const thriller& other) = default;
// Destructor
thriller::~thriller() {
    std::cout << "The destructor was called for " << title <<" of class thriller" << std::endl;
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
    std::cout << "Move constructor was called for " << this->title <<" of class thriller" << std::endl;
    other.title = "Discarded";
    other.director = "Unknown";
    other.plot = "Unknown";
    other.runningTime = 0;
    other.budget = 0;
}
int thriller::getObjectCount() { return count; }


std::ostream& operator<<(std::ostream& os, const thriller& t) {
    os << "Title: " << t.title << "\n"
       << "Director: " << t.director << "\n"
       << "Plot: " << t.plot << "\n"
       << "Running Time: " << t.runningTime << " minutes\n"
       << "Budget: tes" << t.budget << std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, thriller& t) {
    std::cout << "Enter title: ";
    std::getline(is, t.title);
    std::cout << "Enter director: ";
    std::getline(is, t.director);
    std::cout << "Enter plot: ";
    std::getline(is, t.plot);
    std::cout << "Enter running time: ";
    is >> t.runningTime;
    std::cout << "Enter budget: ";
    is >> t.budget;
    return is;
}

int operator+(const thriller& lhs, const thriller& rhs) {
    return lhs.getRunningTime() + rhs.getRunningTime();
}


