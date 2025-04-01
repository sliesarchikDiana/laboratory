#include "action.h"
#include <utility>
#include <vector>

action::action() : movie("Unknown action", "Unknown", "Unknown", 0, 0), explosions(0) {
    std::cout << "Default constructor was called for " << getTitle() << " of class action" << std::endl;
}

action::action(std::string title, std::string director, std::string plot, int runningTime, int budget, int explosions)
    : movie(std::move(title), std::move(director), std::move(plot), runningTime, budget), explosions(explosions) {
    std::cout << "Parameterized constructor was called for " << getTitle() << " of class action" << std::endl;
}

action::action(const action& other)
    : movie(other), explosions(other.explosions) {
    std::cout << "Copy constructor was called for " << getTitle() << " of class action" << std::endl;
}

action::action(action&& other) noexcept
    : movie(std::move(other)){
    std::cout << "Move constructor was called for " << getTitle() << " of class action" << std::endl;
}

action::~action() {
    std::cout << "The destructor was called for " << getTitle() << " of class action" << std::endl;
}


int action::getExplosions() const {
    return explosions;
}

void action::setExplosions(int newExplosions) {
    if (newExplosions >= 0) {
        explosions = newExplosions;
    }
}

// Cast-related methods implementation
void action::addActor(const std::string& actor) {
    movieCast.addActor(actor);
}

void action::removeActor(const std::string& actor) {
    movieCast.removeActor(actor);
}

const std::vector<std::string>& action::getActors() const {
    return movieCast.getActors();
}

bool action::hasActor(const std::string& actor) const {
    return movieCast.hasActor(actor);
}

void action::clearCast() {
    movieCast.clearCast();
}

size_t action::castSize() const {
    return movieCast.size();
}

void action::displayDetails() const {
    std::cout << "Action Movie: " << getTitle()
              << "\nDirector: " << getDirector()
              << "\nPlot: " << getPlot()
              << "\nRunning Time: " << getRunningTime() << " minutes"
              << "\nBudget: " << getBudget() << "$"
              << "\nExplosions: " << explosions
              << "\nCast: ";

    const auto& actors = getActors();
    if (actors.empty()) {
        std::cout << "None";
    } else {
        for (size_t i = 0; i < actors.size(); ++i) {
            std::cout << actors[i];
            if (i != actors.size() - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;
}

action& action::operator=(const action& other) { //copy assignment operator//
    if (this != &other) {
        movie::operator=(other);
        explosions = other.explosions;
        movieCast = other.movieCast;
    }
    return *this;
}