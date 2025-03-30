#ifndef ACTION_H
#define ACTION_H
#include "movie.h"
#include <string>
#include <iostream>

class action : public movie {
private:
    int explosions{};

public:
    action();
    action(std::string title, std::string director, std::string plot, int runningTime, int budget, int explosions);
    action(const action& other);
    action(action&& other) noexcept;
    ~action() override;

    int getExplosions() const;
    void setExplosions(int newExplosions);

    void displayDetails() const override;
};

#endif // ACTION_H