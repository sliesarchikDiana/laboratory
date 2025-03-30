#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class movie {
private:
    std::string title;       // Movie title
    std::string director;    // Director of the movie
    std::string plot;        // Plot description
    int runningTime;         // Running time in minutes
    int budget;              // Budget in dollars
    static int count;        // Static count of movie objects

public:
    // Constructors
    movie(); // Default constructor
    movie(std::string title, std::string director, std::string plot, int runningTime, int budget); // Parameterized constructor
    movie(const movie& other); // Copy constructor
    movie(movie&& other) noexcept; // Move constructor

    // Destructor
    virtual ~movie();

    // Assignment operators
    movie& operator=(const movie& other); // Copy assignment operator
    movie& operator=(movie&& other) noexcept; // Move assignment operator

    // Getters
    std::string getTitle() const;
    std::string getDirector() const;
    std::string getPlot() const;
    int getRunningTime() const;
    int getBudget() const;

    // Static method
    static int getObjectCount(); // Get the count of movie objects

    // Setters
    void setTitle(const std::string& newTitle);
    void setDirector(const std::string& newDirector);
    void setPlot(const std::string& newPlot);
    void setRunningTime(int newRunningTime);
    void setBudget(int newBudget);

    // Friend functions for overloaded operators
    friend std::ostream& operator<<(std::ostream& os, const movie& t);
    friend std::istream& operator>>(std::istream& is, movie& t);
    friend int operator+(const movie& lhs, const movie& rhs);

    // Pure virtual method
    virtual void displayDetails() const = 0; // Abstract method for displaying movie details
};

#endif // MOVIE_H