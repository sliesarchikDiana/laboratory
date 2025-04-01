#ifndef ACTION_H
#define ACTION_H
#include "movie.h"
#include <string>
#include <iostream>
#include "cast.h"

class action : public movie {
private:
    int explosions{};
    cast movieCast;

public:
    action();
    action(std::string title, std::string director, std::string plot, int runningTime, int budget, int explosions);
    action(const action& other);
    action(action&& other) noexcept;
    ~action() override;

    int getExplosions() const;
    void setExplosions(int newExplosions);

    void addActor(const std::string& actor);
    void removeActor(const std::string& actor);
    const std::vector<std::string>& getActors() const;
    bool hasActor(const std::string& actor) const;
    void clearCast();
    size_t castSize() const;

    void displayDetails() const override;

    action& operator=(const action& other);  // Copy assignment
};

#endif // ACTION_H