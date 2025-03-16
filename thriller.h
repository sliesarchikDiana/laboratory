#ifndef THRILLER_H
#define THRILLER_H

#include <string>
class thriller {
private:
    std::string title;
    std::string director;
    std::string plot;
    int runningTime;
    int budget;

    static int count;

public:
    thriller();
    thriller(std::string  title, std::string  director, std::string  plot, int runningTime, int budget);
    thriller(const thriller& other); // Copy constructor
    thriller& operator=(const thriller& other); // Copy assignment operator
    thriller(thriller&& other) noexcept; //  Move constructor
    ~thriller();

    std::string getTitle() const;
    std::string getDirector() const;
    std::string getPlot() const;
    int getRunningTime() const;
    int getBudget() const;

    static int getObjectCount();

    void setTitle(const std::string& newTitle);
    void setDirector(const std::string& newDirector);
    void setPlot(const std::string& newPlot);
    void setRunningTime(int newRunningTime);
    void setBudget(int newBudget);

};

#endif // THRILLER_H
