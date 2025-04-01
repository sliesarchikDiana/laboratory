#ifndef CAST_H
#define CAST_H
#include <string>
#include <vector>

class cast {
private:
    std::vector<std::string> actors;

public:
    cast() = default;
    void addActor(const std::string& actor);

    void removeActor(const std::string& actor);

    const std::vector<std::string>& getActors() const;

    bool hasActor(const std::string& actor) const;

    void clearCast();

    size_t size() const;
};

#endif // CAST_H