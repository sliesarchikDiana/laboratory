#include "blockbuster.h"
#include <iostream>
#include <utility>

blockbuster::blockbuster(): title("Unknown"), director("Unknown"), plot("Unknown"), runningTime(0), budget(0) {
    std::cout << "Default constructor was called for " << title << std::endl;
}

blockbuster::blockbuster(std::string  t, std::string  d, std::string p,  int rt, int b) : title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    std::cout << "The constructor was called for " << title << std::endl;
}

blockbuster::~blockbuster() {
    std::cout << "The destructor was called for " << title << std::endl;
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