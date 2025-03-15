#include "romCom.h"
#include <iostream>
#include <utility>

romCom::romCom(): romCom("Title", "unknown", "plot", 100, 1000000)
{
    std::cout<<"Delegated constructor was called for " << title << std::endl;
}
romCom::romCom(std::string t, std::string d, std::string p, int rt, int b)
  : title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) { }

romCom::~romCom() {
    std::cout << "The destructor was called for " << title << std::endl;
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