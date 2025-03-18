#include "romCom.h"
#include <iostream>
#include <utility>


romCom::romCom(): romCom("Unknown romcom", "Unknown", "plot", 100, 1000000)
{
    std::cout<<"Delegated constructor was called for " << title<<" of class romCom" << std::endl;
}
romCom::romCom(std::string t, std::string d, std::string p, int rt, int b): title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b)
{
    std::cout << "Parameterized constructor was called for " << this->title<<" of class romCom" << std::endl;
}

// Copy constructor
romCom::romCom(const romCom& other) = default;
// Destructor
romCom::~romCom() {
    std::cout << "The destructor was called for " << title<<" of class romCom" << std::endl;
}

std::string romCom::getTitle() const { return title; }
std::string romCom::getDirector() const { return director; }
std::string romCom::getPlot() const { return plot; }
int romCom::getRunningTime() const { return runningTime; }
int romCom::getBudget() const { return budget; }

void romCom::setTitle(const std::string& newTitle) { title = newTitle; }
void romCom::setDirector(const std::string& newDirector) { director = newDirector; }
void romCom::setPlot(const std::string& newPlot) { plot = newPlot; }
void romCom::setRunningTime(int newRunningTime) {
    if (newRunningTime > 0) runningTime = newRunningTime;
}
void romCom::setBudget(int newBudget) {
    if (newBudget >= 0) budget = newBudget;
}

romCom::romCom(romCom&& other) noexcept
    : title(std::move(other.title)),
      director(std::move(other.director)),
      plot(std::move(other.plot)),
      runningTime(other.runningTime),
      budget(other.budget) {
    std::cout << "Move constructor was called for " << this->title <<" of class romCom" << std::endl;
    other.title = "Discarded";
    other.director = "Unknown";
    other.plot = "Unknown";
    other.runningTime = 0;
    other.budget = 0;
}