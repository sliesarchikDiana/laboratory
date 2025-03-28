//
// Created by VivoBook on 28.03.2025.
//
#include "movie.h"
#include <iostream>
#include <string>
#include <utility>
int movie::count = 0;

movie::movie(): title("Unknown movie"), director("Unknown"), plot("Unknown"), runningTime(0), budget(0) {
    ++count;
    std::cout << "Default constructor was called for " << this->title<< std::endl;
}
movie::movie(std::string t, std::string d, std::string p, int rt, int b): title(std::move(t)), director(std::move(d)), plot(std::move(p)), runningTime(rt), budget(b) {
    ++count;
    std::cout << "Parameterized constructor was called for " << this->title<< std::endl;
}

// Copy constructor
movie::movie(const movie& other) = default;
// Destructor
movie::~movie() {
    std::cout << "The destructor was called for " << title<< std::endl;
    --count;
}


std::string movie::getTitle() const { return this->title; }
std::string movie::getDirector() const { return this->director; }
std::string movie::getPlot() const { return this->plot; }
int movie::getRunningTime() const { return this->runningTime; }
int movie::getBudget() const { return this->budget; }


void movie::setTitle(const std::string& newTitle) { this->title = newTitle; }
void movie::setDirector(const std::string& newDirector) { this->director = newDirector; }
void movie::setPlot(const std::string& newPlot) { this->plot = newPlot; }
void movie::setRunningTime(int newRunningTime) {
    if (newRunningTime > 0) {
        this->runningTime = newRunningTime;
    }
}
void movie::setBudget(int newBudget) {
    if (newBudget >= 0) {
        this->budget = newBudget;
    }
}

movie::movie(movie&& other) noexcept
    : title(std::move(other.title)),
      director(std::move(other.director)),
      plot(std::move(other.plot)),
      runningTime(other.runningTime),
      budget(other.budget) {
     ++count;
    std::cout << "Move constructor was called for " << this->title<< std::endl;
    other.title = "Discarded";
    other.director = "Unknown";
    other.plot = "Unknown";
    other.runningTime = 0;
    other.budget = 0;
}
int movie::getObjectCount() { return count; }


std::ostream& operator<<(std::ostream& os, const movie& t) {
    os << "Title: " << t.title << "\n"
       << "Director: " << t.director << "\n"
       << "Plot: " << t.plot << "\n"
       << "Running Time: " << t.runningTime << " minutes\n"
       << "Budget: tes" << t.budget << std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, movie& t) {
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

int operator+(const movie& lhs, const movie& rhs) {
    return lhs.getRunningTime() + rhs.getRunningTime();
}
