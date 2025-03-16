#include "blockbuster.h"
#include <iostream>
#include <utility>

blockbuster::blockbuster(): title("Unknown blockbuster"), director("Unknown director"), plot("Unknown plot"), runningTime(0), budget(0) {
    std::cout << "Default constructor was called for " << title << std::endl;
}

blockbuster::blockbuster(std::string  t, std::string  d, std::string p,  int rt, int b) : title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    std::cout << "Parameterized constructor was called for " << title <<" of class blockbuster"<<std::endl;
}

// Copy constructor
blockbuster::blockbuster(const blockbuster& other) = default;
// Copy assignment operator
blockbuster& blockbuster::operator=(const blockbuster& other) = default;
// Destructor
blockbuster::~blockbuster() {
    std::cout << "The destructor was called for " << title<<" of class blockbuster"<<std::endl;

}

std::string blockbuster::getTitle() const { return title; }
std::string blockbuster::getDirector() const { return director; }
std::string blockbuster::getPlot() const { return plot; }
int blockbuster::getRunningTime() const { return runningTime; }
int blockbuster::getBudget() const { return budget; }

void blockbuster::setTitle(const std::string& newTitle) { title = newTitle; }
void blockbuster::setDirector(const std::string& newDirector) { director = newDirector; }
void blockbuster::setPlot(const std::string& newPlot) { plot = newPlot; }
void blockbuster::setRunningTime(int newRunningTime) {
    if (newRunningTime > 0) runningTime = newRunningTime;
}
void blockbuster::setBudget(int newBudget) {
    if (newBudget >= 0) budget = newBudget;
}

blockbuster::blockbuster(blockbuster&& other) noexcept
    : title(std::move(other.title)),
      director(std::move(other.director)),
      plot(std::move(other.plot)),
      runningTime(other.runningTime),
      budget(other.budget){
    std::cout << "Move constructor was called for " << this->title <<" of class blockbuster"<<std::endl;
    other.title = "Discarded";
    other.director = "Discarded";
    other.plot = "Discarded";
    other.runningTime = 0;
    other.budget = 0;
}