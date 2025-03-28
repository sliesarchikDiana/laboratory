#include "action.h"
#include <iostream>
#include <utility>

action::action(): title("Unknown action"), director("Unknown director"), plot("Unknown plot"), runningTime(0), budget(0) {
    std::cout << "Default constructor was called for " << title<<" of class action"<<std::endl;
}

action::action(std::string  t, std::string  d, std::string p,  int rt, int b) : title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    std::cout << "Parameterized constructor was called for " << title <<" of class action"<<std::endl;
}

// Copy constructor
action::action(const action& other) = default;
// Destructor
action::~action() {
    std::cout << "The destructor was called for " << title<<" of class action"<<std::endl;

}

std::string action::getTitle() const { return title; }
std::string action::getDirector() const { return director; }
std::string action::getPlot() const { return plot; }
int action::getRunningTime() const { return runningTime; }
int action::getBudget() const { return budget; }

void action::setTitle(const std::string& newTitle) { title = newTitle; }
void action::setDirector(const std::string& newDirector) { director = newDirector; }
void action::setPlot(const std::string& newPlot) { plot = newPlot; }
void action::setRunningTime(int newRunningTime) {
    if (newRunningTime > 0) runningTime = newRunningTime;
}
void action::setBudget(int newBudget) {
    if (newBudget >= 0) budget = newBudget;
}

action::action(action&& other) noexcept
    : title(std::move(other.title)),
      director(std::move(other.director)),
      plot(std::move(other.plot)),
      runningTime(other.runningTime),
      budget(other.budget){
    std::cout << "Move constructor was called for " << this->title <<" of class action"<<std::endl;
    other.title = "Discarded";
    other.director = "Discarded";
    other.plot = "Discarded";
    other.runningTime = 0;
    other.budget = 0;
}