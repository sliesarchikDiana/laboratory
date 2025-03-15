#include "sciFy.h"
#include <iostream>
#include <utility>

sciFy::sciFy(): title("Unknown"), director("Unknown"), plot("Unknown"), runningTime(0), budget(0) {
    std::cout << "Default constructor was called for " << title << std::endl;
}

sciFy::sciFy(std::string  t, std::string  d, std::string p,  int rt, int b) : title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    std::cout << "The constructor was called for " << title << std::endl;
}

sciFy::~sciFy() {
    std::cout << "The destructor was called for " << title << std::endl;
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