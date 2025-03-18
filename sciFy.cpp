#include "sciFy.h"
#include <iostream>
#include <utility>

sciFy::sciFy(): title("Unknown sci-fi"), director("Unknown"), plot("Unknown"), runningTime(0), budget(0) {
    std::cout << "Default constructor was called for " << title<<" of class sciFy" << std::endl;
}

sciFy::sciFy(std::string  t, std::string  d, std::string p,  int rt, int b) : title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    std::cout << "Parameterized constructor was called for " << title<<" of class sciFy" << std::endl;
}

// Copy constructor
sciFy::sciFy(const sciFy& other) = default;
// Destructor
sciFy::~sciFy() {
    std::cout << "The destructor was called for " << title<<" of class sciFy" << std::endl;
}


std::string sciFy::getTitle() const { return title; }
std::string sciFy::getDirector() const { return director; }
std::string sciFy::getPlot() const { return plot; }
int sciFy::getRunningTime() const { return runningTime; }
int sciFy::getBudget() const { return budget; }


void sciFy::setTitle(const std::string& newTitle) { title = newTitle; }
void sciFy::setDirector(const std::string& newDirector) { director = newDirector; }
void sciFy::setPlot(const std::string& newPlot) { plot = newPlot; }
void sciFy::setRunningTime(int newRunningTime) {
    if (newRunningTime > 0) runningTime = newRunningTime;
}
void sciFy::setBudget(int newBudget) {
    if (newBudget >= 0) budget = newBudget;


}
sciFy::sciFy(sciFy&& other) noexcept
    : title(std::move(other.title)),
      director(std::move(other.director)),
      plot(std::move(other.plot)),
      runningTime(other.runningTime),
      budget(other.budget) {
    std::cout << "Move constructor was called for " << this->title <<" of class sciFy" << std::endl;
    other.title = "Discarded";
    other.director = "Discarded";
    other.plot = "Discarded";
    other.runningTime = 0;
    other.budget = 0;
}