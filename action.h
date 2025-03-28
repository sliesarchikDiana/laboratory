#ifndef ACTION_H
#define ACTION_H
#include "iostream"
class action {
    private:
    std::string title;
    std::string director;
    std::string plot;
    int runningTime;
    int budget;
    public:
    action();
    action(std::string  title, std::string  director, std::string  plot, int runningTime, int budget);
    action(const action& other); // Copy constructor
    action(action&& other) noexcept; //  Move constructor
    ~action();

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
#endif //ACTION_H
