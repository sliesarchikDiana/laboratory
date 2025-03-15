#ifndef ROMCOM_H
#define ROMCOM_H
#include "iostream"

class romCom {
private:
    std::string title;
    std::string director;
    std::string plot;
    int runningTime;
    int budget;
public:
    romCom();
    romCom(std::string title, std::string director, std::string plot, int runningTime, int budget);
    ~romCom();

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

#endif //ROMCOM_H
