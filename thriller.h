//
// Created by VivoBook on 16.03.2025.
//

#ifndef THRILLER_H
#define THRILLER_H
#include <iostream>


class thriller {
private:
    std::string title;
    std::string director;
    std::string plot;
    int runningTime;
    int budget;
public:
    thriller();
    thriller(std::string title, std::string director, std::string plot, int runningTime, int budget);
    ~thriller();

    std::string getTitle() const;
    std::string getDirector() const;
    std::string getPlot() const;
    int getRunningTime() const;
    int getBudget() const;

    void setTitle(const std::string& newTitle);
    void setDirector(const std::string& newDirector);
    void setPlot(const std::string& newPlot);
    void setRunningTime(int newRunningTime);
    void setBudget(int newBudget);
};



#endif //THRILLER_H
